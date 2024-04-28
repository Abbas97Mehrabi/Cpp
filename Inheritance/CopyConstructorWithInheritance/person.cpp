#include "person.h"
#include <iostream>
using namespace std;

Person::Person(){
      cout << "Default constructor for person callded .." << endl;
}

Person::~Person()
{
}

Person::Person(string_view fullname, int age, string_view address)
      : m_fullname{fullname}, m_age{age}, m_address{address}
{
      cout << "Custom constructor called for Person ..." << endl;
}

Person::Person(const Person& source) : 
      m_fullname(source.m_fullname),m_age(source.m_age),
      m_address(source.m_address)
{
      cout << "Custom copy constructor called for Person ..." << endl;
}

 ostream& operator<<(ostream& out, const Person& person){
      out << "Person[Full name :" << person.get_full_name() <<
       ", Age:" << person.get_age() <<
        ", Address:" << person.get_address() << "]";
      return out;
}