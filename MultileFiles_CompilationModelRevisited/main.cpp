#include <iostream>
#include "compare.h"
#include "compare.cpp"


int main(){

     int maximum = max(23,32);
     std::cout << "Maximum : " << maximum << std::endl;

     int minimum = min(23,32);
     std::cout << "Minimum : " << minimum << std::endl;
     return 0;
     
}
