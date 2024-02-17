#include <iostream>

int main(){
     //for loop
     /*
     for(int i {0}; i < 10 ; i++){
          std::cout << "Pazartesi okul basliyor!!!!" << std::endl;
     }
     for (size_t i {1}; i < 11; i++)
     {
          std::cout << i << " :Hazir miyiz" << std::endl;
     }*/
     //sizeof(size_t) is 8 byte
     //std::cout << "Size of size_t is : " << sizeof(size_t) << std::endl;
     
     // while loop
     /*
     const int COUNT{11};
     int i {1}; // Iterator declaration
     while (i < COUNT)
     {
          std::cout << i << " :I love C#" << std::endl;
          i++;
     }*/

     //Do while loop
     const int COUNT{11};
     int i {1};
     do
     {
          std::cout << i << " :I love C#" << std::endl;
          i++;
     } while (i < COUNT);
     
     
 
     return 0;
     
}