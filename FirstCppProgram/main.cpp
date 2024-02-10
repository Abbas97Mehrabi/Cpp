#include <iostream>
#include <string>

int addNumbers(int first_number, int second_number){
     int sum = first_number + second_number;
     return sum;
}
int main(){
     std::cout << "Hello World!" << std::endl;
     int sum = addNumbers(7, 9);
     std::cout << sum << std::endl;
     std::cout << addNumbers(11, 23) << std::endl;
     

     return 0;
     
}