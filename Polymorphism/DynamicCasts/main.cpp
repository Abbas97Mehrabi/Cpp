#include <iostream>
#include "dog.h"

using namespace std;

void do_something_with_animal_ptr(Animal *animal){
    std::cout << "In function taking base pointer..." << std::endl;
    Feline* feline_ptr = dynamic_cast<Feline*>(animal);
    if(feline_ptr){
        feline_ptr->do_some_feline_thingy();
    }else{
        std::cout << "Couldn't cast to Feline pointer,sorry." << std::endl;
    }
}


void do_something_with_animal_ref(Animal &animal){
    std::cout << "In function taking base reference..." << std::endl;
    Feline* feline_ptr_1 = dynamic_cast<Feline*>(&animal);
    if(feline_ptr_1){
        feline_ptr_1->do_some_feline_thingy();
    }else{
        std::cout << "Couldn't cast to Feline reference,sorry." << std::endl;
    }
}

int main(){
    //base class pointer
    Animal* animal1 = new Feline("stripes", "feline1");
    //animal1->do_some_feline_thingy();


   

    Feline* feline_ptr = dynamic_cast<Feline*>(animal1);
    if(feline_ptr){
        feline_ptr->do_some_feline_thingy();
    }else{
        std::cout << "Couldn't do the transformation from Animal* to Dog*" << std::endl;
    }
 std::cout << "---------------" << std::endl;
    //base class reference
    Feline feline2 ("stripes", "feline2");
    Animal &animal_ref = feline2;
    //animal_ref.do_some_feline_thingy();

   //Dog &feline_ref{dynamic_cast<Dog&>(animal_ref)};
    //feline_ref.do_some_dog_thingy();

    Dog *feline_ptr_1{dynamic_cast<Dog*>(&animal_ref)};
    if(feline_ptr_1){
        feline_ptr_1->do_some_feline_thingy();
    }else{
        std::cout << "Couldn't cast to Dog reference,sorry." << std::endl;
    }
   std::cout << "---------------" << std::endl;
   do_something_with_animal_ptr(animal1);
   do_something_with_animal_ref(animal_ref);

   
    std::cout << "Done" << std::endl;
    delete animal1;
    return 0;
}
