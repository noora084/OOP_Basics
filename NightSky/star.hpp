#ifndef STAR
#define STAR
#include <iostream>
class Star{
    private:
        int x ;
        int y ;  //مختصات
        int brightness ; //روشنایی
        std::string color ;
    public:
        Star(int x , int y , int brightness , std::string color);
        int getX()const ;
        int getY()const ;
};
#endif