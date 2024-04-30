#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"
using namespace std;


class Engineer : public Person
{
      using Person::Person; //Inheriting constructor
      friend ostream& operator<<(ostream& out, const Engineer& operand);
private:
      int contract_count{0};
public:
      /*Engineer();
      
      Engineer(const Engineer& source);*/
      Engineer(string_view fullname, int age, string_view address,int contract_count);
      ~Engineer();

      void build_something(){
            m_fullname = "Mahmud";
            m_age = 19;
            //m_address = "Shanli urfa"; // Compiler error
      }

      int get_contract_count() const{
            return contract_count;
      }

};

#endif

