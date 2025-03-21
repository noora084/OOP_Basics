#ifndef GAME
#define GAME

#include<vector>
#include "character.hpp"

class Game{
    private:
        std::vector<Character> characters ; 
    public:
        void addCharacters(const Character& character) ; 
        void updateCharacter(const std::string& Name, const std::string& attribute, int value);
        void updateCharacter(const std::string& Name, const std::string& attribute, const std::string& value);
        void displayCharacters()const ;
};

#endif