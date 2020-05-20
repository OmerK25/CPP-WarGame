#include "Paramedic.hpp"
#include <vector>
class ParamedicCommander : public Paramedic
{

    vector<Paramedic *> mySoldiers; //The soldiers thats belong to him.
    vector<Paramedic *>::iterator it;

public:
    ParamedicCommander(int g) : Soldier(g, 200, 100) {}
    void act(vector<vector<Soldier *>> &board, pair<int, int> location);
    void act_as_commander(vector<vector<Soldier *>> &board, pair<int, int> location);
};