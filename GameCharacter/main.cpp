#include "game.hpp"
#include <iostream>

int main(){
    Character warrior("warrior" , "swordplay" , 10) ; 
    warrior.addSkill("sword fighting" , 12) ; 
    warrior.addSkill("Defense", 8);

    Character roya("roya", "defence", 60);
    roya.addSkill("Stealth", 8);

    Game game;
    game.addCharacters(warrior);
    game.addCharacters(roya);

    game.updateCharacter("warrior" , "power" , "magic") ; 
	game.updateCharacter("warrior" , "health" , -1) ; 

    game.displayCharacters();
}