#pragma once
#include <stdexcept>

    class Soldier{
        private:
        int player; //player number.
        int hp; // health points.
        int power; //amount of power of his act; heal or damage.
        std::pair<int,int> loc;// current position on the board.

        public:
    virtual void act () {};

//          full constructor
   Soldier(int p, std::pair<int,int> l,int h,int pow)
        :player(p),loc(l),hp(h),power(pow){} 

//          Get&Set
    // virtual int _hp();
    // virtual void set_hp(int new_hp);

    // virtual std::pair<int,int> _loc();
    // virtual void set_loc (std::pair<int,int> new_loc);
    
    // virtual int _player();
    // virtual void set_player (int new_player);

    // virtual int _power();
    // virtual void set_power(int new_power);
    };
