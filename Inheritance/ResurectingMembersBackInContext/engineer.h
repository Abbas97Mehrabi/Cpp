#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"
using namespace std;


class Engineer : private Person
{
      friend ostream& operator<<(ostream& out, const Engineer& operand);
private:
      int contract_count{0};
public:
      Engineer();
      ~Engineer();

      void build_something(){
            m_fullname = "Mahmud";
            m_age = 19;
            //m_address = "Shanli urfa"; // Compiler error
      }
      public : 
            using Person::add;
      protected:
            using Person::get_full_name;
            using Person::get_age;
            using Person::get_address;
            //using Person::m_address; //compiler error 

      int get_contract_count() const{
            return contract_count;
      }

};

#endif

