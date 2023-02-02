#include <iostream>

int main()
{
    
    //Compile time error
    //std::cout << "Hello Space" << std::endl
    std::cout << "Hello Space" << std::endl;
  
    //Runtime error
    int undefined = 5/0;
    std::cout << "undefined :" << undefined;

}