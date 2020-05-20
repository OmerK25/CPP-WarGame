#include "FootSoldier.hpp"

void FootSoldier::act(vector<vector<Soldier *>> &board, pair<int, int> location)
{
    Soldier *victim;
    if (board[location.first][location.second - 1] != nullptr)
    {
        victim = board[location.first][location.second - 1];
        victim->set_hp(victim->_hp() - 10);
    }

    if (board[location.first][location.second + 1] != nullptr)
    {
        victim = board[location.first][location.second + 1];
        victim->set_hp(victim->_hp() - 10);
    }

    if (board[location.first - 1][location.second] != nullptr)
    {
        victim = board[location.first - 1][location.second];
        victim->set_hp(victim->_hp() - 10);
    }

    if (board[location.first + 1][location.second] != nullptr)
    {
        victim = board[location.first + 1][location.second];
        victim->set_hp(victim->_hp() - 10);
    }

    if (victim->_hp() <= 0)
    {
        victim = nullptr;
    }
}
