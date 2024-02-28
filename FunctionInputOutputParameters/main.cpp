#include <iostream>
using namespace std;

void max_str(const string& input1, const string input2, string& output){
      if (input1>input2)
      {
            output = input1;
      }else{
            output = input2;
      }
}

void max_int(int input1, int input2, int& output){
      if (input1>input2)
      {
            output = input1;
      }else{
            output = input2;
      }
}
void max_double(double input1, double input2, double* output){
      if (input1>input2)
      {
            *output = input1;
      }else{
            *output = input2;
      }
}
int main(){
      /*
      string out_str;
      string string1("Panjshir");
      string string2("Kabul");
      max_str(string1,string2,out_str);
      cout << "Max_str : " << out_str << endl; */
      /*
      int out_int;
      int int1{45};
      int int2{723};
      max_int(int1,int2,out_int);
      cout << "Max_int : " << out_int << endl;*/
      
      double out_double;
      double in_double1{31.2};
      double in_double2{126.6};
      max_double(in_double1,in_double2,&out_double);

      cout << "Max_double : " << out_double << endl;


     return 0;
     
}