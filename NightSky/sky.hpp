#ifndef SKY
#define SKY
#include <iostream>
#include <vector>
#include "star.hpp"

class Sky{
    private:
    public:
        std::vector<Star> stars ; 
        void addStars(Star star) ; 
        void displaysky() ; 
        void render() ; 

};
#endif