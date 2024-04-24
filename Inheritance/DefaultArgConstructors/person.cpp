#include "person.h"
#include <iostream>
using namespace std;

Person::Person(){
      cout << "Default constructor for person callded .." << endl;
}

Person::~Person()
{
}

Person::Person(string_view fullname, int age, const string address){
      m_fullname = fullname;
      m_age = age;
      m_address = address;
}
 ostream& operator<<(ostream& out, const Person& person){
      out << "Person[Full name :" << person.get_full_name() <<
       ", Age:" << person.get_age() <<
        ", Address:" << person.get_address() << "]";
      return out;
}