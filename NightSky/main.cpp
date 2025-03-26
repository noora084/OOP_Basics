#include "sky.hpp"
#include "star.hpp"
#include <stdexcept>
#include <iostream>
using namespace std ; 

int main(){
    try{
        Sky nightSky;
        Star Star1(300, 55, 3, "yellow") ;
        Star Star2(199, 109, 2, "white") ; 
        Star Star3(350, 109, 1, "blue") ; 
        Star Star4(125, 299, 20, "blue") ; 

    
        nightSky.addStars(Star1);
        nightSky.addStars(Star2);
        nightSky.addStars(Star3);
        nightSky.addStars(Star4);


    
        nightSky.displaysky();
    }
    catch(exception& e){
        cerr << "Error: " << e.what() << endl ;
    }

}