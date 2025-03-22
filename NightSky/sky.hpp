#ifndef SKY
#define SKY
#include <iostream>
#include <vector>
#include "star.hpp"

class Sky{
    private:
        std::vector<Star> stars ; 
    public:
        void addStars(Star star) ; 
        void displaysky() const ; 

};
#endif