#include <iostream>
#include <iomanip>

int main(){
    
    //Declare and initialize the variables
    float numberFloat {1.12345678901234567890f};
    double numberDouble {1.12345678901234567890};
    long double numberLongDouble {1.12345678901234567890L};

    //Print out the sizes
    std::cout << "size of float : " << sizeof(numberFloat) << std::endl ;
    std::cout << "size of double : " << sizeof(numberDouble) << std::endl ;
    std::cout << "size of long double : " << sizeof(numberLongDouble) << std::endl ;

    //Precision
    std::cout << std::setprecision(20);   //Control the precision from std::cout.
    std::cout << "Number Float is : " << numberFloat << std::endl ;              // 7 Digits
    std::cout << "Number Double is : " << numberDouble << std::endl ;            // 15' ish digits 
    std::cout << "Number Long Double is : " << numberLongDouble << std::endl ;   // 15+ Digits
    

    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10{ 5.6 };
    double number11{};      //Initialized to 0
    double number12{};      //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    
    
    std::cout << number10 << "/" << number11 << " yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12;
    
    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;
    
  

    return 0;

}