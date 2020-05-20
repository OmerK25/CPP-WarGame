#include "Sniper.hpp"
#include <vector>

class SniperCommander : public Sniper
{
    vector<Sniper *> mySoldiers; //The soldiers thats belong to him.
    vector<Sniper *>::iterator it;

public:
    SniperCommander(int g) : Soldier(g, 150, 20) {}
    void act(vector<vector<Soldier *>> &board, pair<int, int> location); //attack by himself first
    void act_as_commander(vector<vector<Soldier *>> &board, pair<int, int> location);                                             //send all his soldiers to attack
};