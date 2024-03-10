#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person
{
      friend ostream& operator<<(ostream& out, const Person& person);
private:
      string first_name{"Mysterious"};
      string last_name{"Person"};
public:
      Person();
      Person(string& first_name_param, string& last_name_param);
      ~Person();
      string get_first_name(){
            return first_name;
      }
      string get_last_name(){
            return last_name;
      }
};

#endif // PERSON_H