#include <iostream>
#include "dog.h"

using namespace std;

int main(){
    //All destructors called
    //Dog dog1;

    cout << "-----------------" << endl;
    //only animal destructor called :: for call all destructors set the destructors virtual
    Animal *p_animal = new Dog;
    delete p_animal;

    return 0;
}
