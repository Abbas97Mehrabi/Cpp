#include <iostream>
#include <iomanip>



int main(){

     std::cout << "Hello";
     std::cout << "World";

     std::cout << std::endl;

     std::cout << "------------------" << std::endl;

     std::cout << "Hello" << std::endl;
     std::cout << "World" << std::endl;

     std::cout << std::endl;

     std::cout << "Hello \n";
     std::cout << "World \n";

     std::cout << std::endl;

     std::cout << "This is my message ..." << std::endl << std::flush; // Diractly send to terminal

     std::cout << std::endl;
     
     
     std::cout << "Unformated table : " << std::endl;
     std::cout << "Abbas" << " " << "Mehrabi" << " 26" << std::endl;
     std::cout << "Amin" << " " << "Kodirov" << " 22" << std::endl;
     std::cout << "Selman" << " " << "Kara" << " 20" << std::endl;
     std::cout << "Ahmet" << " " << "Kir" << " 20" << std::endl;
     std::cout << "Selcuk" << " " << "Doksan" << " 20" << std::endl;
     std::cout << "Mahmut" << " " << "Hacimurat" << " 19" << std::endl;

     std::cout << std::endl;
     std::cout << "Formated table : " << std::endl;

     std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
     std::cout << std::setw(10) << "Abbas" << std::setw(10) << "Mehrabi" << std::setw(5) << "26" << std::endl;
     std::cout << std::setw(10) << "Amin" << std::setw(10) << "Kodirov" << std::setw(5) << "20" << std::endl;
     std::cout << std::setw(10) << "Selman" << std::setw(10) << "Kara" << std::setw(5) << " 20" << std::endl;
     std::cout << std::setw(10) << "Ahmet" << std::setw(10) << "Kir" << std::setw(5) << " 20" << std::endl;
     std::cout << std::setw(10) << "Selcuk" << std::setw(10) << "Doksan" << std::setw(5) << " 20" << std::endl;
     std::cout << std::setw(10) << "Mahmut" << std::setw(10) << "Hacimurat" << std::setw(5) << " 19" << std::endl;

     std::cout << std::endl;
     std::cout << "Formated table with variables : " << std::endl;

     int col_width{14};

     std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Age" << std::endl;
     std::cout << std::setw(col_width) << "Abbas" << std::setw(col_width) << "Mehrabi" << std::setw(col_width) << "26" << std::endl;
     std::cout << std::setw(col_width) << "Amin" << std::setw(col_width) << "Kodirov" << std::setw(col_width) << "20" << std::endl;
     std::cout << std::setw(col_width) << "Selman" << std::setw(col_width) << "Kara" << std::setw(col_width) << " 20" << std::endl;
     std::cout << std::setw(col_width) << "Ahmet" << std::setw(col_width) << "Kir" << std::setw(col_width) << " 20" << std::endl;
     std::cout << std::setw(col_width) << "Selcuk" << std::setw(col_width) << "Doksan" << std::setw(col_width) << " 20" << std::endl;
     std::cout << std::setw(col_width) << "Mahmut" << std::setw(col_width) << "Hacimurat" << std::setw(col_width) << " 19" << std::endl;

     std::cout << std::endl;
     std::cout << "Right justified table(default) : " << std::endl;

      col_width = 20;

     std::cout << std::left; // You can change it to left or right // By default it is on right
     std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Age" << std::endl;
     std::cout << std::setw(col_width) << "Abbas" << std::setw(col_width) << "Mehrabi" << std::setw(col_width) << "26" << std::endl;
     std::cout << std::setw(col_width) << "Amin" << std::setw(col_width) << "Kodirov" << std::setw(col_width) << "20" << std::endl;
     std::cout << std::setw(col_width) << "Selman" << std::setw(col_width) << "Kara" << std::setw(col_width) << " 20" << std::endl;
     std::cout << std::setw(col_width) << "Ahmet" << std::setw(col_width) << "Kir" << std::setw(col_width) << " 20" << std::endl;
     std::cout << std::setw(col_width) << "Selcuk" << std::setw(col_width) << "Doksan" << std::setw(col_width) << " 20" << std::endl;
     std::cout << std::setw(col_width) << "Mahmut" << std::setw(col_width) << "Hacimurat" << std::setw(col_width) << " 19" << std::endl;

     std::cout << std::endl;
     std::cout << "Internal justified : " << std::endl;
     std::cout << std::right;
     std::cout << std::setw(10) << -123.45 << std::endl;
     std::cout << std::internal;
     std::cout << std::setw(10) << -123.45 << std::endl;

     std::cout << std::endl;
     std::cout << "Table with fill characters : " << std::endl;

      col_width = 20;

     std::cout << std::left; // You can change it to left or right // By default it is on right
     std::cout << std::setfill('-');
     std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Age" << std::endl;
     std::cout << std::setw(col_width) << "Abbas" << std::setw(col_width) << "Mehrabi" << std::setw(col_width) << "26" << std::endl;
     std::cout << std::setw(col_width) << "Amin" << std::setw(col_width) << "Kodirov" << std::setw(col_width) << "20" << std::endl;
     std::cout << std::setw(col_width) << "Selman" << std::setw(col_width) << "Kara" << std::setw(col_width) << "20" << std::endl;
     std::cout << std::setw(col_width) << "Ahmet" << std::setw(col_width) << "Kir" << std::setw(col_width) << "20" << std::endl;
     std::cout << std::setw(col_width) << "Selcuk" << std::setw(col_width) << "Doksan" << std::setw(col_width) << "20" << std::endl;
     std::cout << std::setw(col_width) << "Mahmut" << std::setw(col_width) << "Hacimurat" << std::setw(col_width) << "19" << std::endl;

     std::cout << std::endl;

     int pos_num {34};
     int neg_num {-25};

     std::cout << "Pos_num : " << pos_num <<std::endl;
     std::cout << "Neg_num : " << neg_num <<std::endl;

     std::cout << std::endl;
     std::cout << std::showpos;
     std::cout << "Pos_num : " << pos_num <<std::endl;
     std::cout << "Neg_num : " << neg_num <<std::endl;

     std::cout << std::endl;
     std::cout << std::noshowpos;
     std::cout << "Pos_num : " << pos_num <<std::endl;
     std::cout << "Neg_num : " << neg_num <<std::endl;
     



     return 0;
}