#include <iostream>


int main(){
     //int pointers
     //size of pointers is 8 bytes
     /*
     int int_var {43};
     int* p_int{&int_var};
     std::cout << "Int var : " << int_var << std::endl;
     std::cout << "P_int (address in memory) : " << p_int << std::endl;

     int int_var1 {43};
     int* p_int1{&int_var1};
     std::cout << "P_int (address in memory) : " << p_int1 << std::endl;

     //Derefrencing a pointer
     int* p_int2 {nullptr};
     int int_data {26};
     p_int2 = &int_data;
     std::cout << "Value : " << *p_int2 << std::endl;
     */
     //Pointer to char 
     /*
     const char * message{"Hello World!"};
     std::cout << "Message : " << message << std::endl;
     std::cout << "*Message : " << *message << std::endl;//print only H
     */
    //Dynamic heap memory
    /*
    int *p_number1{nullptr};
    p_number1 = new int; //dynamically allocate space for a single int

    *p_number1 = 88;
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;

    //Return memory to the OS
    delete p_number1;
    p_number1 = nullptr;*/

    //right ways to a declaration a pointer
    /*int *p_number2{new int};
    int *p_number3{new int (22) };
    int *p_number4{new int { 23 } };

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration : " << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl;
    std::cout << "*p_number2 : " << *p_number2 << std::endl;

    std::cout << "p_number3 : " << p_number3 << std::endl;
    std::cout << "*p_number3 : " << *p_number3 << std::endl;

    std::cout << "p_number4 : " << p_number4 << std::endl;
    std::cout << "*p_number4 : " << *p_number4 << std::endl;

    //Remember to release the memory
    delete p_number2;
    p_number2 = nullptr;
    delete p_number3;
    p_number3 = nullptr;
    delete p_number4;
    p_number4 = nullptr;
     
     //reuse pointer
     p_number3 = new int(100);
     std::cout << "p_number3 : " << p_number3 << std::endl;
     std::cout << "*p_number3 : " << *p_number3 << std::endl;

     delete p_number3;
     p_number3 = nullptr;*/
     /*
     std::cout << "Solution 1 : " << std::endl;
     int *p_number5{nullptr};
     int *p_number6{new int(26)};
     //check for nullptr before use
     if(p_number6 != nullptr){
          std::cout << "*p_number6 : " << *p_number6 << std::endl;
     }else{
          std::cout << "Invalid address " << std::endl;
     }*/
     /*
     std::cout << "Solution 2 : " << std::endl;
     int *p_number7{new int(26)};
     //use the pointer however you want
     std::cout << "p_number7 : " << p_number7 << " - " << *p_number7 << std::endl;

     delete p_number7;
     p_number7 = nullptr; // reset the pointer

     //check for nullptr before use
     if(p_number7 != nullptr){
          std::cout << "*p_number7 : " << *p_number7 << std::endl;
     }else{
          std::cout << "Invalid memory access! " << std::endl;
     }*/
     /*
     std::cout << "Solution 3 : " << std::endl;
     int *p_number8{new int(1376)};
     int *p_number9{p_number8};

     std::cout << "p_number8 : " << p_number8 << " - " << *p_number8 << std::endl;
     //check for nullptr before use
     if(p_number8 != nullptr){
          std::cout << "p_number9 : " << p_number9 << " - " << *p_number9 << std::endl;
     }else{
          std::cout << "Invalid address " << std::endl;
     }
     
     delete p_number8;
     p_number8 = nullptr;

     if(p_number8 != nullptr){
          std::cout << "p_number9 : " << p_number9 << " - " << *p_number9 << std::endl;
     }else{
          std::cout << "Warning : Trynig to use an Invalid pointer " << std::endl;
     }
     */
     
    // When New fail
    /*
    for (size_t i = 0; i < 100; i++){
          try
          {
               int *data = new int[100000000];
          }
          catch(const std::exception& ex)
          {
               std::cerr << "Something went wrong : " << ex.what() << std::endl;
          }
    }*/

    //std::nothrow
    for (size_t i = 0; i < 100; i++){
          
          int *data = new(std::nothrow) int[100000000];
          if(data!=nullptr){
               std::cout << "Data allocated" << std::endl;
          }else{
               std::cout << "Data allocation failed" << std::endl;
          }
    }
    std::cout << "Program ending well" << std::endl;
    
     return 0;
     
}