#include <iostream>
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};
int main(){
     //if statement
     bool red = false;
     bool green {true};
     bool yellow {false};
     bool police_stop {true};
     /*
     if(red){
          std::cout << "Stop" << std::endl;
     }   
     if(yellow){
          std::cout << "Slow down!" << std::endl;
     }
     if(green){
          std::cout << "Go" << std::endl;
     }*/
     //nesting condition
     /*
     if(green){
          if (police_stop)
          {
               std::cout << "Stop" << std::endl;
          }else{
               std::cout << "Go" << std::endl;
          }*/
          /*
     if(green && !police_stop){
          std::cout << "Go" << std::endl;
     }else{
          std::cout << "Stop" << std::endl;
     }*/
     //else if statement
     /*
     int tool {Pen};
     if (tool == Pen){
          std::cout << "Active tool is Pen" << std::endl;
     }
     else if(tool == Marker){
          std::cout << "Active tool is Marker" << std::endl;
     }
     else if(tool == Eraser){
          std::cout << "Active tool is Eraser" << std::endl;
     }
     else if(tool == Rectangle){
          std::cout << "Active tool is Rectangle" << std::endl;
     }
     else if(tool == Circle){
          std::cout << "Active tool is Circle" << std::endl;
     }
     else if(tool == Ellipse){
          std::cout << "Active tool is Ellipse" << std::endl;
     }*/
     //switch statement
     /*
     int tool {};
     switch (tool)
     {
     case Pen:{
          std::cout << "Active tool is Pen" << std::endl;
     }
          break;
          case Marker:{
          std::cout << "Active tool is Marker" << std::endl;
     }
          break;
          case Eraser:{
          std::cout << "Active tool is Eraser" << std::endl;
     }
          break;
          case Rectangle:{
          std::cout << "Active tool is Rectangle" << std::endl;
     }
          break;
          case Circle:{
          std::cout << "Active tool is Circle" << std::endl;
     }
          break;
          case Ellipse:{
          std::cout << "Active tool is Ellipse" << std::endl;
     }
          break;
     
     default:{
          std::cout << "Can't match any tool" << std::endl;
     }
     }*/
     // ternary Operators
     int result {};
     result = (Pen < Rectangle) ? 100 : 50;
     std::cout << "The result is : " << result << std::endl;

     return 0;
     
}