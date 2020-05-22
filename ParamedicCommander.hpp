#pragma once
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic
{

public:
    ParamedicCommander(int g) : Soldier(g, 200, 100) {}
    void act(vector<vector<Soldier *>> &board, pair<int, int> location);
    void act_as_commander(vector<vector<Soldier *>> &board, pair<int, int> location);
};