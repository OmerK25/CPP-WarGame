#include "Soldier.hpp"
using namespace std;

class Sniper : public virtual Soldier {
    
public:
    Sniper(int g): Soldier(g,100,50) {}
    Sniper() : Soldier(0,0,0) {}
    void act();
};