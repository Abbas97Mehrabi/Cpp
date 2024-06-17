#include <iostream>
#include <cstring>

void welcomeMessage(std::string firstname, std::string lastname);
std::string capitilize(std::string chararry);
int main(){
    std::string firstname, lastname;
    std::cout << "What is your firstname ? "  ;
    std::cin >> firstname; 
    std::cout << "What is your lastname ? "  ;
    std::cin >> lastname ; 
    
    
    welcomeMessage(capitilize(firstname), capitilize(lastname));
}

void welcomeMessage(std::string firstname, std::string lastname){
    std::cout << "Hello " << firstname << " " << lastname << " and wellcome to our company." << std::endl;
}
std::string capitilize(std::string chararry){
    for (auto& x : chararry) { 
        x = tolower(x); 
    } 
    for (auto& x : chararry) { 
        x = toupper(x); 
        break;
    } 
    return chararry;
}