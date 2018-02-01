//Authors:Sunny Vang 
#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout<< "What is your name?"<< std::endl;
    std::cin>> name;

    std::string activity;
    std::cout<< "What is an activity you like to do?" << std::endl;
    std::cin>> activity;

    std::string number;
    std::cout<< "Give me a number between 5-50." << std::endl;
    std::cin>> number;

    std::string symbol;
    std::cout<< "Give me an question mark or exclamation mark." << std::endl;
    std::cin>> symbol;

    std::string decimal;
    std::cout<< "Give me a decimal number between 5 and 20." << std::endl;
    std::cin>> decimal;
    
    std::cout<< "Hi, my name is " << name << std::endl;
    std::cout<< "My favorite thing to do is " << activity << "." << std::endl;
    std::cout<< "I finished my " << activity << " in " << number << " seconds. " << std::endl;
    std::cout<< "What is your favorite thing to do" << symbol << std::endl;
    std::cout<< "Say your answer in " << decimal << " minutes!" << std::endl;


  return 0;
}
