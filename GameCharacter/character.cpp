#include "character.hpp"
#include <iostream>

using namespace std ; 

Character::Character(const string &name , const string &power , int health):
name(name), health(health), power(power){} 


void Character::addSkill(const string& skillName, int level){
    if(level>=0)
    skills.push_back(skill(skillName , level)) ; 
    else
        cout << "level under 0 !!" << endl ;
}

void Character::showCharacters()const{
    cout << "character: " << name << endl ;
    cout << "health: " << health << endl ; 
    cout << "power: " << power << endl ; 
    cout << "skills: "<< endl ; 
    for(const auto & ee : skills){
        cout << ee.name << ": " << "level " << ee.level << endl ; 
    }
}

void Character::update(const string& attribute, int value){
    if (attribute == "health"){
        if(value>0){
            health = value;
            cout << name << "'s health updated to: " << health << "\n";            
        }else
            cout << "health can not ben under 0 !" << endl ;
       
    }
    else{
        cout << "Invalid attribute: " << attribute << "\n";
    }
}

void Character::update(const string& attribute, const string & value){
    if (attribute == "power"){
        power = value;
        cout << name << "'s power updated to: " << power << "\n";
    }
}



string Character::getName()const{
    return name ; 
}

int Character::getHealth()const{
    return health ; 
}

void Character::setHealth(int newHealth){
    health = newHealth; 
}

string Character::getPower()const{
    return power; 
}

void Character::setPower(string newPower){
    power = newPower; 
}