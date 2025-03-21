#include "patient.hpp"
#include "hospital.hpp"

#include <cstring>
#include <iostream>

using namespace std ;

int main(){
        int NumOfPeople ;
        string Name ; 
        float age ; 
        float bodytemperature ; 
        int heartrate ; 
        int respiratoryrate ; 
        int bloodpressure ; 
        Hospital h ; 

        cout << "Enter the number of people: ";
        cin >> NumOfPeople ;
        cin.ignore(); // Clear the newline character after integer input

        for(int i = 0 ; i < NumOfPeople ; i++){
            cout << "Enter name for person " << i + 1 << ": ";
            getline(cin, Name);  
            cout << "enter age in months for " << Name << ": " ;
            cin >> age ;   
            cout << "Enter body temperature for " << Name << ": ";
            cin >> bodytemperature;
            cout << "Enter heart rate for " << Name << ": ";
            cin >> heartrate;
            cout << "Enter respiratoryrate for " << Name << ": ";
            cin >> respiratoryrate;
            cout << "Enter bloodpressure for " << Name << ": ";
            cin >> bloodpressure;           
            cin.ignore();
            
            Patient patient(Name, age , bodytemperature, heartrate, respiratoryrate , bloodpressure);
        }

}