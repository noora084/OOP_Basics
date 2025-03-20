#include "calender.hpp"
#include "event.hpp"

#include <iostream>
#include <ctime>

using namespace std ;

bool Calender::conflicts(const Event & a, const Event & b){
    if(a.name == b.name){
        cout << "warning! adding two events with one name: " << a.name << endl ;
        return true; 
    }
    if(a.year < 0 || b.year < 0 || a.month < 1 || b.month < 1 || a.month > 12 || b.month > 12 
        || a.day<1 || a.day > 30 || b.day < 1 || b.day > 30)
        return true ; 

        if (a.year == b.year && a.month == b.month && a.day == b.day) {
            cout << "Conflict detected! Events overlap on the same day: " << a.name << " and " << b.name << endl;
            return true;
        }   
    return false ; 
}

void Calender:: addEvent(const Event & event){
    Event tempEvent = event  ;
    for(const auto & e : events){
        if(conflicts(e , tempEvent)){
            cout << "event not added: " << tempEvent.name << endl ;
            tempEvent.setDeleted() ;  
            //deleted_events.push_back(tempEvent) ;
            return ;  
        }
    }
    events.push_back(tempEvent); 
    cout << "event added: " << tempEvent.name << endl ; 
}



