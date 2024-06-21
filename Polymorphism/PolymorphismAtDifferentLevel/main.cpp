#include <iostream>
#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"
using namespace std;


int main(){
    
    //Animal Polymorphisim
    Dog dog1("Dark gray","dog1");
    Cat Cat1("Black stripes", "cat1");
    Pigeon pigeon1("White", "pigeon1");
    Crow crow1("Black", "crow1");

    Animal *animals[]{&dog1,&Cat1,&pigeon1,&crow1};

    for(const auto &animal:animals){
        animal->breathe();
    }

    cout << "---------" << endl;

    //Feline polymorphism

    Dog dog2("Dark gray", "dog2");
    Cat cat2("Black stripes", "cat2");
    Pigeon pigeon2("White", "pigeon2"); //compiler error

    Feline *felines[]{&dog2,&cat2};

    for(const auto &feline : felines){
        feline->run();
    }

    cout << "---------" << endl;

    Pigeon pigeon3("White", "pigeon3");
    Crow crow3("Black", "crow3");

    Bird *birds[]{&pigeon3,&crow3};

    for(const auto &bird:birds){
        bird->fly();
    }
    return 0;
}    



