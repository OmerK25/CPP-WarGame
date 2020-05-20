#include "FootSoldier.hpp"

void FootSoldier::act(vector<vector<Soldier *>> &board, pair<int, int> location)
{
    Soldier *victim;

  /**
   * should loop somehow smart over the 2D vector 
   * and remove 10 hp from the closest ENEMY
   * at the end if the enemy has less than 1 hp, 
   * remove him from the board by turning him to nullptr
   * 
   **/


    
    if (board[location.first][location.second - 1] != nullptr 
    && board[location.first][location.second - 1]->_player() != this->_player())
    {
        victim = board[location.first][location.second - 1];
        victim->set_hp(victim->_hp() - 10);
    }

    else if (board[location.first][location.second + 1] != nullptr)
    {
        victim = board[location.first][location.second + 1];
        victim->set_hp(victim->_hp() - 10);
    }

    else if (board[location.first - 1][location.second] != nullptr)
    {
        victim = board[location.first - 1][location.second];
        victim->set_hp(victim->_hp() - 10);
    }

    else if (board[location.first + 1][location.second] != nullptr)
    {
        victim = board[location.first + 1][location.second];
        victim->set_hp(victim->_hp() - 10);
    }

    if (victim->_hp() <= 0)
    {
        victim = nullptr;
    }
}
