#include "sky.hpp"
#include "star.hpp"
#include <iostream>
#include <vector>
using namespace std ; 

void Sky::addStars(Star star){
    stars.push_back(star);
}
void Sky::displaysky()const{
    const int width = 51;
    const int height = 21;
    char grid[height][width]; //sky

    // Initialize grid with empty space
    for (int i = 0; i < height; ++i){
        for (int j = 0; j < width; ++j)
            grid[i][j] = ' ';        
    }
    // Place stars
    for (auto& star : stars)
        grid[star.getY()][star.getX()] = '*';
        
    // Add a UFO 
    grid[8][24] = '(' ;
    grid[8][25] = 'U';
    grid[8][26] = 'F';
    grid[8][27] = 'O';
    grid[8][28] = ')' ;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }
        
}
