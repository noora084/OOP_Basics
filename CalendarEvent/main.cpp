#include "calender.hpp"
#include "event.hpp"
#include <iostream>
#include <ctime>

using namespace std ; 

int main(){
    Event event1("meeting" , 2026  , 1 , 21 , 2027 , 2 , 3) ; 
    Event event2("lunch" , 2025 , 5 , 40 , 2060 , 6 , 21 ) ; 
    Event event3("dinner" , 2037 , 4 , 3 , 2021 , 4 , 8) ; 

    Calender cal ; 
    
    cal.addEvent(event1) ; 
    cal.addEvent(event2) ;
    cal.addEvent(event3) ; 
    
    cal.refresh(event1) ; 
    cal.refresh(event2) ;  
    cal.refresh(event3) ; 
 


}