#include <iostream>

void enter_bar(unsigned int age){
     if(age < 18){
          std::cout << "You are " << age << " years old and not allowed to enter." << std::endl;
     }else{
          std::cout << "You are " << age << " years old. Welcome to the bar." << std::endl;
     }
     return;
}

int max(int a, int b){//Parameters
     if(a>b){
          return  a;
     }else{
          return b;
     }
}

void say_hello(){
     std::cout << "Hello there " << std::endl;
     return;
}

double increment_multiply(double a, double b){
     double result = ((++a) * (++b));
     return result;
}

int main(){

     //enter_bar(21);

     /*int x{31};
     int y{52};
     int result{};
     result = max(x, y);//Arguments
     std::cout << "Result is : " << result << std::endl;*/

     //say_hello();

     //double result1 = increment_multiply(3.00, 4.00);
     //std::cout << "Result is : " << result1 << std::endl;

     return 0;
     
}