#include "gps.hpp"
#include <iostream>
#include <stdexcept>
using namespace std ; 

int main(){
    while(true){
        try{
            int la , lon ; 
            string name ; 
            cout << "the name: " ; 
            cin >> name ; 
            cout << "its longitude: " ;
            cin >> lon ; 
            cout << "its latitude: " ;
            cin >> la ;        
            Gps gps(name , la , lon) ; 
            cout << name << "`s location added succesfully!" << endl ; 
            cout << "name: " << gps.name << " " << "longitude: " << gps.longitude << " "  << "latitude: " << gps.latitude << endl; 
        }
        catch(exception& e){
            cerr << "Error: " << e.what() << endl ;
        }
    }
}