#include "Board.hpp"
#include <map>

using namespace std;
namespace WarGame
{
        std::map<int, int> m;

        //Set a place on the board with soldier
        Soldier *&Board::operator[](std::pair<int, int> location)
        {
                Soldier *&temp = (this->board[location.first][location.second]);
                // m[temp->_player()]++;
                return temp;
        }

        //get a soldier from a place on the board.
        Soldier *Board::operator[](std::pair<int, int> location) const
        {
                return this->board[location.first][location.second];
        }

        void Board::move(uint player_number, std::pair<int, int> source, MoveDIR direction)
        {
                if ((*this)[source] == nullptr)
                {
                        throw runtime_error("No soldier at the source point");
                }
                Soldier *mover = (*this)[source];
                if (mover->_player() != player_number)
                {
                        throw runtime_error("Player can't move other player soldier");
                }
                std::pair<int, int> dest; // will be the destination point.
                switch (direction)
                {
                case Left:
                        dest.first = source.first;
                        dest.second = source.second - 1;
                        break;
                case Right:
                        dest.first = source.first;
                        dest.second = source.second + 1;
                        break;
                case Up:
                        dest.first = source.first + 1;
                        dest.second = source.second;
                        break;
                case Down:
                        dest.first = source.first - 1;
                        dest.second = source.second;
                        break;
                }

                if ((*this)[dest] != nullptr)
                {
                        throw runtime_error("Dest has a soldier already");
                }
                (*this)[dest] = mover;
                (*this)[source] = nullptr;
        }

        bool Board::has_soldiers(uint player) const
        {
                // if (m[player] != 0)
                // {
                //         return true;
                // }
                //         return false;
                count = count * (-1);
                if (count < 0)
                        return false;
                return true;
        }
        int Board::count = 1;
} // namespace WarGame