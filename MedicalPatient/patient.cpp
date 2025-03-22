#include "patient.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std ; 


bool Patient::validateRespiratoryRate(float age, int rate){
    if (age <= 1.5 && rate >= 30 && rate <= 40)return true; // نوزاد
    if (age == 6  && rate >= 25 && rate <= 40) return true; // 6 ماهه
    if (age == 3 * 12 && rate >= 20 && rate <= 30) return true; // 3 ساله
    if (age == 6 * 12 && rate >= 18 && rate <= 25) return true; // 6 ساله
    if (age == 10 * 12 && rate >= 17 && rate <= 23) return true; // 10 ساله
    if (age == 50 * 12 && rate >= 15 && rate <= 18) return true; // بزرگسال
    if (age == 65 * 12 && rate >= 18 && rate <= 25) return true; // 50 ساله
    if (age == 80 * 12 && rate >= 12 && rate <= 28) return true; // سالمند
    if (age > 80 * 12 && rate >= 10 && rate <= 30) return true; // بالای 80
    return false; 
}
Patient::Patient(string name , float age , float body_temperature ,int heart_rate , int respiratory_rate , int blood_pressure)
        : name(name) , age(age) , body_temperature(body_temperature) , heart_rate(heart_rate) , respiratory_rate(respiratory_rate) , 
        blood_pressure(blood_pressure){
            if(body_temperature <= 36.0){
                cerr <<"body temperature must be in the range of 36.0 to 37.5 C" << endl ;
                this->name += " (body temperature must be higher)!!" ; 
            }
            if(body_temperature > 37.5){
                cerr <<"body temperature must be in the range of 36.0 to 37.5 C" << endl ;
                this->name += " (body temperature must be lower!!)" ;
            }
            if(heart_rate > 100){
                cerr <<"heart rate must be in the range of 60 to 100 bpm" << endl ;
                this->name += " (heart rate must be lower!!)" ;
            }
            if(heart_rate < 60){
                cerr <<"heart rate must be in the range of 60 to 100 bpm" << endl ;
                this->name += " (heart rate must be higher!!)" ;
            }

            if(!validateRespiratoryRate(age , respiratory_rate)){

                cerr << respiratory_rate << " as respiratory rate" << " is not good for age " << age << endl ; 
                this-> name += "(check out the respiratory rate!!)" ; 

            } 
            if(blood_pressure < 80){
                cerr << "blood pressure must be in the range between 80 and 120"  << endl ;
                this->name += " (blood pressure must be higher!!)" ;
            }
            if(blood_pressure > 120){
                cerr << "blood pressure must be in the range between 80 and 120" << endl ;
                this->name += " (blood pressure must be lower!!)" ;
            }
}

void Patient::encryptDecrypt(string &inpString){
    char xorKey = 'X'; 

    for (size_t i = 0 ; i < inpString.length() ; i++){
        inpString[i] ^= xorKey ; 
    }
}

void Patient::encryptDecrypt(int &intInt){
    char xorKey = 'X'; 
    intInt ^= xorKey ; 
}

void Patient::encryptDecrypt(float &value) {
    char xorKey = 'X';
    char *bytePtr = reinterpret_cast<char*>(&value); // Treat float as raw bytes

    for (size_t i = 0; i < sizeof(float); i++) {
        bytePtr[i] ^= xorKey;
    }
}
void Patient::encrypt(){
    encryptDecrypt(name);
    encryptDecrypt(age) ; 
    encryptDecrypt(body_temperature);
    encryptDecrypt(heart_rate);
    encryptDecrypt(respiratory_rate);
    encryptDecrypt(blood_pressure);
}

void Patient::decrypt() {
    encrypt(); 
}

void Patient::saveToFile() const{
    ofstream file("encrypted_data.txt");
    file << name << endl;
    file << age << endl ;
    file << body_temperature << endl;
    file << heart_rate << endl;
    file << respiratory_rate << endl;
    file << blood_pressure << endl;
    file.close() ; 
}

Patient::~Patient(){
    ofstream file("encrypted_data.txt" , ios::app); // فایل خروجی
    if (!file.is_open())
        cout << "Unable to open file for writing." << endl;

        encrypt() ; 
        saveToFile() ; 
 
    cout << "--------------------------" << endl  ; 
    cout << "Encrypted data written to file." << endl;

    ifstream inFile("encrypted_data.txt");
    if (!inFile.is_open()) {
        cout << "Unable to open file for reading." << endl;
    }

    cout << "--------------------------" << endl  ; 
    cout << "Decrypted Data from File:" << endl;

    while (getline(inFile, name)){
        if (name.empty())
                break;

        if(inFile >> age >> body_temperature >> heart_rate >> respiratory_rate >> blood_pressure){
            inFile.ignore();
            encrypt() ;   
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl ; 
            cout << "Body Temperature: " << body_temperature << endl;
            cout << "Heart Rate: " << heart_rate << endl;
            cout << "Respiratory Rate: " << respiratory_rate << endl;
            cout << "Blood Pressure: " << blood_pressure << endl; 
        }
    }
    inFile.close();
}
