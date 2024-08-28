#include <iostream>
#include "derived.h"
using namespace std;

int main(){
   
   //Base ptr : Uses polymorphism
   Base *base_ptr = new Derived;
   base_ptr->setup();
   auto result = base_ptr->get_value();
   cout << "Result (base ptr) : " << result << endl; //100
   base_ptr->clean_up();
    delete base_ptr;
    
    return 0;
}