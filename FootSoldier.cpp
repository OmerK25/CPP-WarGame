#include "FootSoldier.hpp"
#include <bits/stdc++.h>

float distance(pair<int, int> location1, pair<int, int> location2)
{
    int first = location2.first - location1.first;
    int sec = location2.second - location1.second;
    // Calculating distance
    return sqrt(pow(first, 2) + pow(sec, 2) * 1.0);
}

void FootSoldier::act(vector<vector<Soldier *>> &board, pair<int, int> location)
{
    Soldier *victim;
    float min = 100000;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            Soldier *temp = board[i][j];
            pair<int, int> tempLoc;
            tempLoc.first = i;
            tempLoc.second = j;
            if ((temp != nullptr) && (this->_player() != temp->_player()))
            {
                if (distance(location, tempLoc) < min)
                {
                    min = distance(location, tempLoc);
                    victim = temp;
                }
            }
        }
    }
    victim->set_hp(victim->_hp() - this->_power());
    if (victim->_hp() <= 0)
    {
        victim = nullptr;
    }
}

