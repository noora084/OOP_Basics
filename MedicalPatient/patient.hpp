#ifndef PATIENT
#define PATIENT
#include <stdexcept>

class Patient{
    private:
        std::string name ; 
        float age ; 
        float body_temperature ; 
        int heart_rate ; 
        int respiratory_rate ; 
        int blood_pressure ;
        void encryptDecrypt(std::string &inpString) ;
        void encryptDecrypt(int &intInt) ; 
        void encryptDecrypt(float &value) ; 

    public:
        Patient(std::string name , float age , float body_temperature ,int heart_rate , int respiratory_rate , int blood_pressure) ;
        ~Patient() ;
        void encrypt();
        void decrypt() ; 
        void saveToFile() const;

};
#endif