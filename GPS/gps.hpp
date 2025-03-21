#ifndef GPS
#define GPS
#include <iostream>

class Gps{
    public:
        int latitude ; 
        int longitude;
        std::string name ; 
        Gps( std::string& name, int latitude ,int longitude);
        ~Gps();

};
#endif


