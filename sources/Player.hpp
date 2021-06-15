#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <string>
#include <set>
using std::string;
using std::set;

namespace pandemic {
    class Player {
        public:
            City location; 
            Board& brdd;
            map <City, bool> cards;
            Player& take_card(City city); 

            Player(Board& brd, City city);
            
        
            
            virtual Player& fly_direct(City city);
            virtual Player& fly_charter(City city);
            virtual Player& fly_shuttle(City city);

            virtual Player& build();
            virtual Player& drive(City city); 
            virtual Player& treat(City city);
            virtual Player& discover_cure(Color color);
            virtual string role();
           
            Player& remove_cards();
    };
}