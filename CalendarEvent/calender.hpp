#ifndef CALENDER
#define CALENDER
#include <iostream>
#include <vector>

class Event ; 

class Calender{
    public:
        //std::vector<Event> deleted_events ; 
        std::vector<Event> events ; 

        void addEvent(const Event & event) ; 
        bool conflicts(const Event & a, const Event & b) ;
};

#endif