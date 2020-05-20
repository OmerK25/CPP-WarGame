#include <vector>
#include "FootCommander.hpp"
#include <iostream>
void FootCommander::act(vector<vector<Soldier *>> &board, pair<int, int> location) {
    
}
void FootCommander::act_as_commander(vector<vector<Soldier *>> &board, pair<int, int> location){
for(it = mySoldiers.begin(); it < mySoldiers.end(); it++){

Soldier *s = *it;
s->act(board, location);
}
}

