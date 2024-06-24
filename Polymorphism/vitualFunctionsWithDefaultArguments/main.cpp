#include <iostream>
#include "derived.h"
using namespace std;

int main(){
   
   //Base ptr : Uses polymorphism
   Base *base_ptr = new Derived;
   double result = base_ptr->add();
   cout << "Result (base ptr) : " << result << endl; //12
    
    cout << "***********************" << endl;

    //base ref :: Uses Polymorphism
    Derived derived1;
    Base &base_ref1 = derived1;
    result = base_ref1.add();
    cout << "Result (base ref) : " << result << endl; //12
    cout << "***********************" << endl;

    //Raw objects
    Base base3;
    result = base3.add();
    cout << "Raw result : " << result << endl;
    cout << "***********************" << endl;

    //Direct Object :: Uses Static binding
    Derived derived2;
    result = derived2.add();
    cout << "Result (Direct object) : " << result << endl;
    cout << "***********************" << endl;

    //Raw Objects - slicing : Uses Static binding
    Base base1 = derived2;
    result = base1.add();
     cout << "Result (Raw objects assigment) : " << result << endl;
    return 0;
}