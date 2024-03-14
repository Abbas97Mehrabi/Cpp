#include "person.h"
#include <iostream>
using namespace std;

Person::Person(){

}

Person::Person(string_view fullname, int age, const string address){
      m_fullname = fullname;
      m_age = age;
      m_address = address;
}
 ostream& operator<<(ostream& out, const Person& person){
      out << "Person[Full name :" << person.get_fullname() <<
       ", Age:" << person.get_age() <<
        ", Address:" << person.get_address() << "]";
      return out;
}