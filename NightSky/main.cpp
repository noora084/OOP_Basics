#include "sky.hpp"
#include "star.hpp"
#include <stdexcept>
#include <iostream>
using namespace std ; 
int main(){
    try{
        Sky nightSky;
        Star Star1(10, 5, 3, "yellow") ;
        Star Star2(20, 10, 2, "white") ; 
        Star Star3(49, 15, 1, "blue") ; 
    
        nightSky.addStars(Star1);
        nightSky.addStars(Star2);
        nightSky.addStars(Star3);
    
        nightSky.displaysky();
    }
    catch(exception& e){
        cerr << "Error: " << e.what() << endl ;
    }

}