#pragma once
#include "Soldier.hpp"
class FootSoldier : public virtual Soldier {
public:
    FootSoldier (int g): Soldier(g,{0,0},100,10) {} //constructor that get the player num
    FootSoldier():Soldier(0,{0,0},0,0){} //default constructor
    void act();
};