#include "hospital.hpp"

#include <vector>
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std ; 

void Hospital::addpatients(Patient & patient){
    patients.push_back(patient);
}
// const vector<Patient>& Hospital::getPatients() const {
//     return patients;
// }