#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include <string_view>
using namespace std;

class Person
{
      friend ostream& operator<<(ostream& out, const Person& person);
public:
      string m_fullname{"None"};
protected:
      int m_age{0};
private:
      string m_address{"None"};
public:
      Person();
      Person(string_view fullname, int age, string_view address);
      Person(const Person& source);
      ~Person();
      //Getters
      string get_full_name() const{
            return m_fullname;
      }
      int get_age()const{
            return m_age;
      }
      string get_address()const{
            return m_address;
      }

      int add(int a, int b, int c) const {
            return a + b + c;
      }
      int add(int a, int b) const {
            return a + b;
      }

      //Setters
      void set_fullname(string_view fn){
            m_fullname = fn;
      }
      void set_address(string_view ad){
            m_address = ad;
      }
      void set_age(int age){
            m_age = age;
      }
};

#endif // PERSON_H