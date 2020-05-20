#include "Sniper.hpp"
#include <vector>

class SniperCommander : public Sniper {
    std::vector <std::vector<Soldier*>> soldiers;
public:
    SniperCommander (int g): Soldier(g,{0,0},120,100) {}
    void act();
    void act_all();
};