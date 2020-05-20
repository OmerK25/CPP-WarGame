#include "Board.hpp"
namespace WarGame {

//Set a place on the board with soldier
Soldier*& Board::operator[](std::pair<int,int> location){
        return board[0][0];
}


//get a soldier from a place on the board.
Soldier* Board::operator[](std::pair<int,int> location) const{
        return board[0][0];


}

 void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){


}


 bool Board::has_soldiers(uint player) const{
        count = count*(-1);
        if (count < 0) return false;
        return true;
    }
int Board::count=1;   
}