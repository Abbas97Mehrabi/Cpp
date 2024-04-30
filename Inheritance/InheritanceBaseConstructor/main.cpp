#include <iostream>
#include "person.cpp"
#include "engineer.cpp"
int main(){
     

     //Engineer eng1("Abbas Mehabi", 26 ,"Yomra Trabzon");//doesn't take contract count 
     Engineer eng1("Abbas Mehabi", 26 ,"Yomra Trabzon",24);
     cout << "eng1: " << eng1 << endl;
     return 0;

}