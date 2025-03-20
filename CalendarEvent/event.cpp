#include "event.hpp"

#include <iostream>

using namespace std ; 

Event::Event(string name, time_t year , time_t month , time_t day): name(name), year(year) , month(month) , day(day) , isdeleted(false){}


void Event::setDeleted(){
    isdeleted = true ; 

}
bool Event::getDeleted()const{
    return isdeleted ; 

}

Event::~Event(){
    if(isdeleted){
        cout << "event " << name << " has been deleted"  << endl  ; 
    }
}

