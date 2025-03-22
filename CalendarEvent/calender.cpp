#include "calender.hpp"
#include "event.hpp"

#include <iostream>
#include <ctime>

using namespace std ;

bool Calender::conflicts(const Event & a, const Event & b){

    if(a.start.year < 2025 || b.start.year < 2025 || a.start.month < 1 || b.start.month < 1 || a.start.month > 12 || b.start.month > 12 
        || a.start.day < 1 || b.start.day > 30 || b.start.day < 1 || b.start.day > 30){
        return true ; 

        }
        if(a.end.year < 2025 || b.end.year < 2025 || a.end.month < 1 || b.end.month < 1 || a.end.month > 12 || b.end.month > 12 
            || a.end.day < 1 || b.end.day > 30 || b.end.day < 1 || b.end.day > 30)
            return true ;

        if (a.start.year == a.end.year && a.start.month == a.end.month && a.start.day == a.end.day){
            cout << "Conflict detected! Events overlap on the same day: " << a.name <<  endl;
            return true;
        }
        if (b.start.year == b.end.year && b.start.month == b.end.month && b.start.day == b.end.day){
            cout << "Conflict detected! Events overlap on the same day: " << b.name <<  endl;
            return true;
        }      
    return false ; 
}
void Calender::refresh(const Event & event){
    Event tempEvent = event ; 
    time_t now = time(0) ; 
    tm*ltm = localtime(&now) ; 

    int currentYear = 1900 + ltm->tm_year ; 
    int currentMonth = 1 + ltm->tm_mon ; 
    int currentDay = ltm->tm_mday ;

    if(event.start.year < currentYear){ //deleted because of the wrong validation for month and day
            cout << "the event " << tempEvent.name << " has been expired" << endl ; 
            tempEvent.setDeleted() ; 
        }else if(event.end.year < currentYear){
            cout << "the event " << tempEvent.name << " has been expired" << endl ; 
            tempEvent.setDeleted() ;
        }
        else{    
            cout << "the event " << tempEvent.name << " is still on" << endl ;     
        }
}

void Calender:: addEvent(const Event & event){
    Event tempEvent = event  ;
    for(const auto & e : events){
        if(conflicts(e , tempEvent)){
            cout << "event not added: " << tempEvent.name << endl ;
            tempEvent.setDeleted() ;  
            return ;  
        }
    }
    events.push_back(tempEvent); 
    cout << "event added: " << tempEvent.name << endl ; 
}



