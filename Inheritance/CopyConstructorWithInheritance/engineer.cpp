#include "person.h"
#include "engineer.h"
#include <iostream>
using namespace std;

Engineer::Engineer(){
      cout << "Default constructor for engineer calles .." << endl;
}

Engineer::Engineer(string_view fullname, int age, string_view address,int contract_count_param) :
      Person(fullname,age,address), contract_count(contract_count_param)
{
      cout << "Custom constructor called for Engineer ..." << endl;
}

Engineer::Engineer(const Engineer& source)
      : Person(source), contract_count(source.contract_count)
{
      cout << "Custom Copy constructor called for Engineer ..." << endl;
}

Engineer::~Engineer()
{
}

ostream& operator<<(ostream& out, const Engineer& operand){
      out << "Engineer [Full name : " << operand.get_full_name() <<
            ",age : " << operand.get_age() << 
            ",address : " << operand.get_address() << 
            ",contract_count : " << operand.get_contract_count() << "]";
      
      return out;
}

