#ifndef CALENDER
#define CALENDER

#include <iostream>
#include <vector>
#include "event.hpp"

class Event ;

class Calender{
    public:
        std::vector<Event> events ; 
        void refresh(const Event & event) ;
        void addEvent(const Event & event) ; 
        bool conflicts(const Event & a, const Event & b) ;
};

#endif