#include "game.hpp"
#include <iostream>
using namespace std ;


void Game::addCharacters(const Character& character){
    characters.push_back(character) ; 
}
void Game::updateCharacter(const string& Name, const string& attribute, int value){
    for(auto& chara : characters){
        if(chara.getName() == Name){
            chara.update(attribute , value) ;
            return; 
        }
    }
    cout << "Character with name \"" << Name << "\" not found.\n";
}
void Game::updateCharacter(const string& Name, const string& attribute, const string& value){
    for(auto& chara : characters){
        if(chara.getName() == Name){
            chara.update(attribute , value) ; 
            return ; 
        }
    }
    cout << "Character with name \"" << Name << "\" not found.\n";
}
void Game::displayCharacters() const{
    cout << "Game Characters:" << endl;
    for (const auto& character : characters) {
        character.showCharacters();
        cout << "........." << endl;
    }
}

