#ifndef HOSPITAL
#define HOSPITAL

#include "patient.hpp"
#include <vector>

class Hospital{
     private:
       std::vector<Patient> patients ; 
    public:
        void addpatients( Patient& patient ) ;
       // const std::vector<Patient>& getPatients() const; // بازگرداندن وکتور برای دسترسی


};

#endif
