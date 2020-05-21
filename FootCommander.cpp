#include <vector>
#include "FootCommander.hpp"
#include <iostream>
void FootCommander::act(vector<vector<Soldier *>> &board, pair<int, int> location)
{
}
void FootCommander::act_as_commander(vector<vector<Soldier *>> &board, pair<int, int> location)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            Soldier *maybeFoot = board[i][j];
            if (typeid(*maybeFoot) == typeid(FootSoldier))
                maybeFoot->act(board, location);
        }
    }
}
