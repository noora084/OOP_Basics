#ifndef GAME
#define GAME

#include<vector>
#include "character.hpp"

class Game{
    private:
        std::vector<Character> characters ; 
    public:
        void addCharacters(const Character& character) ; 
        void displayCharacters()const ;
};

#endif