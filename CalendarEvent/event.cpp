#include "event.hpp"
#include "event.hpp"

#include <iostream>
using namespace std ; 

Event::Event(string name, int startYear , int startMonth , int startDay , int endYear , int endMonth , int endDay)
: name(name), isdeleted(false){
    start = {startYear, startMonth, startDay} ;
    end = {endYear, endMonth, endDay} ;
}

void Event::setDeleted(){
    isdeleted = true ; 
}

bool Event::getDeleted()const{
    return isdeleted ; 
}

Event::~Event(){
    if(getDeleted()){
        cout << "the event " << name << " has been deleted"  << endl  ; 
    }
}