#include "person.h"
using namespace std;

Person::Person(){

}

Person::Person(string& first_name_param, string& last_name_param){
      
}
 ostream& operator<<(ostream& out, const Person& person){
      out << "Person[" << person.first_name << " " << person.last_name << "]";
      return out;
}