#include "star.hpp"
#include <iostream>
using namespace std ; 

Star::Star(int x , int y , int brightness , std::string color):
            x(x) , y(y) , brightness(brightness) , color(color){
            if (x < 0 || x > 400 || y < 0 || y > 400) { // imaginary sky
                throw out_of_range("Star coordinates out of sky bounds!");
            }
}
int Star::getX()const{
    return x ; 
}
int Star::getY()const{
    return y ; 
}
int Star::getBrightness()const{
    return brightness ; 
}
