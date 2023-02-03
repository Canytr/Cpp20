#include <iostream>

//Function Prototype
int addNumber(int first_parameter,int second_parameter)
{
    int result = first_parameter + second_parameter;
    return result;
}

int main()
{
    int firstNumber {5};       //int firstNumber = 5;
    int secondNumber {10};     //int secondNumber = 10;
    
    std::cout << "First Number : " << firstNumber << std::endl;
    std::cout << "Second Number : " << secondNumber << std::endl; 

    int summation = firstNumber +secondNumber;
    std::cout << "Sum : " << summation << std::endl;

    summation = addNumber(10,10);
    std::cout << "Sum : " << summation << std::endl;

    summation = addNumber(20,20);
    std::cout << "Sum : " << summation << std::endl;

    std::cout << "Sum : " << addNumber(30,30) << std::endl;
}