#include "person.h"

Person::Person(){

}

Person::Person(string& first_name_param, string& last_name_param){
      
}
friend ostream& operator<<(ostream& out, const Person& person){
      out << "Person[" << person.first_name << " " << person.last_name << "]";
      return out;
}