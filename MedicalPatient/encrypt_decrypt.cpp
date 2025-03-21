#include <iostream>
#include <vector>
#include <fstream>
#include<bits/stdc++.h> 
using namespace std ; 

void encryptDecrypt(string &inpString){
    char xorKey = 'P'; 

    for (size_t i = 0 ; i < inpString.length() ; i++){
        inpString[i] ^= xorKey ; 
    }
}
void encryptDecrypt(int &intInt){
    char xorKey = 'P'; 
    intInt ^= xorKey ; 
}
void encryptDecrypt(float &value) {
    char xorKey = 'X';
    char *bytePtr = reinterpret_cast<char*>(&value); // Treat float as raw bytes

    for (size_t i = 0; i < sizeof(float); i++) {
        bytePtr[i] ^= xorKey;
    }
}

int main(){
    
    int numofppl ; 
    cout << "Enter the number of people: ";
    cin >> numofppl;

    ofstream file("encrypted_data.txt"); // فایل خروجی
    if (!file.is_open()) {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < numofppl; i++) {
        string name;
        int bodyTemperature, heartRate;
        float dddd ;

        cout << "Enter name for person " << i + 1 << ": ";
        cin >> name;
        cout << "Enter body temperature for " << name << ": ";
        cin >> bodyTemperature;
        cout << "Enter heart rate for " << name << ": ";
        cin >> heartRate;
        cout << "enter ddd: " ;
        cin >> dddd ;

        encryptDecrypt(name);
        encryptDecrypt(bodyTemperature);
        encryptDecrypt(heartRate);
        encryptDecrypt(dddd) ; 
        file << name << endl;
        file << bodyTemperature << endl;
        file << heartRate << endl;
        file << dddd << endl;

    }    
    file.close();
    cout << "Encrypted data written to file." << endl;

    // خواندن و رمزگشایی اطلاعات از فایل
    ifstream inFile("encrypted_data.txt");
    if (!inFile.is_open()) {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    cout << "\nDecrypted Data from File:" << endl;

    while (!inFile.eof()) {
        string name;
        int bodyTemperature, heartRate;  float dddd ;


        // خواندن از فایل
        getline(inFile, name);
        if (name.empty())
            break; // بررسی خالی بودن
        inFile >> bodyTemperature;
        inFile >> heartRate;
        inFile >> dddd ;
        inFile.ignore(); // حذف کاراکتر اضافی

        // رمزگشایی داده‌ها
        encryptDecrypt(name);
        encryptDecrypt(bodyTemperature);
        encryptDecrypt(heartRate);
        encryptDecrypt(dddd);


        // نمایش اطلاعات رمزگشایی‌شده
        cout << "Name: " << name << endl;
        cout << "Body Temperature: " << bodyTemperature << endl;
        cout << "Heart Rate: " << heartRate << endl;
        cout << "dddddddddd: " << dddd << endl;


    }

    inFile.close();
    
}