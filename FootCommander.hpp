#include "FootSoldier.hpp"
#include <vector>

class FootCommander : public FootSoldier
{
    vector<FootSoldier *> mySoldiers; //The soldiers thats belong to him.
    vector<FootSoldier *>::iterator it;

public:
    FootCommander(int g) : Soldier(g, 150, 20) {}
    void act(vector<vector<Soldier *>> &board, pair<int, int> location); //attack by himself first
    void act_as_commander(vector<vector<Soldier *>> &board, pair<int, int> location);                                             //send all his soldiers to attack
};