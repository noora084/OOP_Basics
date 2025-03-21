#include "game.hpp"
#include <iostream>
using namespace std ;


void Game::addCharacters(const Character& character){
    characters.push_back(character) ; 
}

void Game::displayCharacters() const{
    cout << "Game Characters:" << endl;
    for (const auto& character : characters) {
        character.showCharacters();
        cout << "........." << endl;
    }
}

