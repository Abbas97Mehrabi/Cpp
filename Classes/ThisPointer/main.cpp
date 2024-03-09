#include <iostream>
#include <string_view>
using namespace std;


class Dog
{
private:
     string name;
     string breed;
     int* p_age{nullptr};


public:
     Dog() = default;
     Dog(string_view name_param, string_view breed_param, int age_param);
     ~Dog();
     void print_info(){
          cout << "Dog (" << this << ") : [ name : " << name <<
           " breed : " << breed << " age : " << *p_age << "]" << endl;
     }
     //Chained calls using pointers
     /*Dog* set_dog_breed(string_view breed){
          
          this->breed = breed;
          return this;
     }
     Dog* set_dog_name(string_view name){
          //name = name;
          this->name = name;
          return this;
     }
     Dog* set_dog_age(int age){
          
          *(this->p_age) = age;
          return this;
     }*/
     //Chained calls refrences
     Dog& set_dog_breed(string_view breed){
          
          this->breed = breed;
          return *this;
     }
     Dog& set_dog_name(string_view name){
          //name = name;
          this->name = name;
          return *this;
     }
     Dog& set_dog_age(int age){
          
          *(this->p_age) = age;
          return *this;
     }
};
Dog::Dog(string_view name_param, string_view breed_param, int age_param){
     name = name_param;
     breed = breed_param;
     p_age = new int;// Allocated heap memory
     *p_age = age_param;
     cout << "Dog constructor called for " << name << " at " << this <<  endl;
}
Dog::~Dog(){
     delete p_age;
     cout << "Dog destructor called for " << name << " at " << this <<  endl;
}



int main(){

     Dog doggy1("Haski", "Shepherd", 4); //Constructor
     doggy1.print_info();

     /*doggy1.set_dog_name("Jack");
     doggy1.set_dog_breed("Doberman");
     doggy1.set_dog_age(2);*/
     //Chained calls using pointers
     //doggy1.set_dog_name("Jack")->set_dog_breed("Doberman")->set_dog_age(3);

     //Chained calls using refrences
     doggy1.set_dog_name("Jack").set_dog_breed("Doberman").set_dog_age(3);

     doggy1.print_info();


     cout << "Done!" << endl;

     return 0;
}