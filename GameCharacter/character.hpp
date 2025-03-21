#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <vector>

struct skill{
    std::string name ; 
    int level ; 
    skill(const std::string& name, int level) : name(name), level(level) {}
};
 
class Character{
    private:
        std::string name ; 
        int health ; 
        std::string power ;
        std::vector<skill> skills ; 
    public:
        Character(const std::string &name , const std::string &power , int health) ; 
        void addSkill(const std::string& skillName, int level);
        void showCharacters()const ; 
        void update(const std::string & attribute , int value) ; 
        void update(const std::string& attribute, const std::string & value) ; 
        std::string getName()const ; 
        int getHealth()const ; 
        void setHealth(int newHealth);
        std::string getPower()const ; 
        void setPower(std::string newPower) ; 
    };      

#endif