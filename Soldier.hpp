#pragma once
#include <stdexcept>

    class Soldier{
        private:
        int player; //player number.
        int hp; // health points.
        int power; //amount of power of his act; heal or damage.

        public:
    virtual void act () {};

//          full constructor
   Soldier(int p,int h,int pow)
        :player(p),hp(h),power(pow){} 

//          Get&Set
    virtual int _hp(){
        return hp;
    }
    virtual void set_hp(int new_hp){
        hp = new_hp;
    }

    virtual int _player(){
        return player;
    }
    virtual void set_player (int new_player){
        player = new_player;
    }

    virtual int _power(){
        return power;
    }
    virtual void set_power(int new_power){
        power = new_power;
    }
    };
