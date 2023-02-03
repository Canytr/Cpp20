#include <iostream>
#include <string>


int main()
{
     //Printing Data
     std::cout << "Printing data to console" << std::endl;
     std::cerr << "Printing errors to console" << std::endl;
     std::clog << "Printing log messages to the console" << std::endl;

     //Get data from console
     int age;
     std::string name;

     std::cout << "Enter your name and age" << std::endl;
     std::cin >> name;
     std::cin >> age;

     std::cout << "Your name : " << name << std::endl << "Your age : " << age << std::endl;

     //if you want to getline from console
     /*
     int age;
     std::string name;

     std::cout << "Enter your name and age" << std::endl;
     std::getline(std::cin,name);
     std::cin >> age;

     std::cout << "Your name : " << name << std::endl << "Your age : " << age << std::endl;
      */
     
     return 0;
}