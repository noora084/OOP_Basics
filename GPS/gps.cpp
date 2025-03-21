#include "gps.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std ; 



Gps::Gps( string& name, int latitude ,int longitude): name(name) ,latitude(latitude) , longitude(longitude){
    if(latitude < -90 || latitude > 90)
        throw out_of_range("Latitude must be between -90 and 90!");
    if(longitude < -180 || longitude > 180)
        throw out_of_range("Longitude must be between -180 and 180!");

        fstream myfile("locations.txt", ios::app);
        myfile << "Location added: " << endl ;
        myfile << name << ":" << "(" << latitude << "," << longitude << ")" << endl;
        myfile.close();
}

