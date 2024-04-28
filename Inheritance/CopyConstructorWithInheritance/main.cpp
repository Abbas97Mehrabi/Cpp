#include <iostream>
#include "person.cpp"
#include "engineer.cpp"
#include "civilengineer.cpp"
int main(){
     

     /*Engineer eng1("Abbas Mehrabi",26,"Yomra Sancak Trabzon #23",2 );

     cout << "---------------------------" << endl;

     Engineer eng2(eng1);
     cout << "eng2 : " << eng2 << endl;*/
     CivilEngineer cEng1("Shaker safi",21,"Yomra Yurt",2 , "Road Strength");

     cout << "---------------------------" << endl;

     CivilEngineer cEng2(cEng1);
     cout << "cEng2 : " << cEng2 << endl;


}