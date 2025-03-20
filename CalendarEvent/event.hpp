#ifndef EVENT
#define EVENT

#include "calender.hpp"
#include <iostream>
#include <ctime>


class Event{
    public: 
        std::string name ;
        std::time_t year ; 
        std::time_t month ;
        std::time_t day ; 
        bool isdeleted ; 
        void setDeleted() ; 
        bool getDeleted() const ; 
        Event(std::string name, std::time_t year , std::time_t month , std::time_t day);
        ~Event() ; 
};

#endif


