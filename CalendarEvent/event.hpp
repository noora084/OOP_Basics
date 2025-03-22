#ifndef EVENT
#define EVENT

#include "calender.hpp"
#include <iostream>
#include <ctime>

struct start_time{
    int year ; 
    int month ;
    int day ;  
};

struct end_time{
    int year ; 
    int month ;
    int day ;  
};

class Event{
    public: 
        std::string name ;
        start_time start ; 
        end_time end ;
        bool isdeleted ; 
        void setDeleted() ; 
        bool getDeleted() const ; 
        Event(std::string name, int startYear , int startMonth , int startDay , int endYear , int endMonth , int endDay);
        ~Event() ; 
};

#endif


