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
};
Dog::Dog(string_view name_param, string_view breed_param, int age_param){
     name = name_param;
     breed = breed_param;
     p_age = new int;// Allocated heap memory
     *p_age = age_param;
     cout << "Dog constructor called for : " << name << endl;
}
Dog::~Dog(){
     delete p_age;
     cout << "Dog destructor called for : " << name << endl;
}

/*void some_func(){
     Dog* p_dog = new Dog("Poppy", "Shepherd", 4);
     delete p_dog;//Causes for the destructor of Dog to be called
}*/

int main(){
     Dog doggy1("Poppy1", "Shepherd", 4);
     Dog doggy2("Poppy2", "Shepherd", 4);
     Dog doggy3("Poppy3", "Shepherd", 4);
     Dog doggy4("Poppy4", "Shepherd", 4);
     //some_func();
     cout << "Done!" << endl;

     return 0;
     
}