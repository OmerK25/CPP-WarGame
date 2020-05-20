#include "ParamedicCommander.hpp"

void ParamedicCommander::act(vector<vector<Soldier *>> &board, pair<int, int> location) {}
void ParamedicCommander::act_as_commander(vector<vector<Soldier *>> &board, pair<int, int> location){
    
for(it = mySoldiers.begin(); it < mySoldiers.end(); it++){

Soldier *s = *it;
s->act(board, location);

}
}
