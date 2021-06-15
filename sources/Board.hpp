#pragma once
#include <map>
#include <set>
#include <iostream>
#include "City.hpp"
#include "Color.hpp"
using namespace std;

namespace pandemic 
{
    class Board 
    {
        public:
            Board();
            typedef pair <Color, int> cc; //Defines an orderly pair of armies and a number of disease cubes to be embedded in each city
            map <City, cc> maps; //Cities status according to pairs
            map <City, bool> stations; //Research stations
            map <Color, bool> cures; //cures
            map <City, set<City>> graph;//map connects

            int& operator[] (City city);
            bool is_clean();
            friend ostream& operator<<(ostream &os, const Board &board);
            
            //function test
            void remove_cures();
            void remove_stations();
    };
}