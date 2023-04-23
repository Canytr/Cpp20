#include <iostream>

int main(){
   
   constexpr bool condition {false};

   if constexpr (condition){
       std::cout << "Condition is true" << std::endl;
   }else{
       std::cout << "Condition is false" << std::endl;
   }
    return 0;
}

/*
This expression defines a C++ variable named "condition" with the "constexpr" and "bool" keywords,
and assigns the value "false" to it.The "constexpr" keyword indicates that the value of the "condition" 
variable is known at compile-time and cannot be changed at runtime. The "bool" keyword specifies that 
the variable is of boolean type, which means it can only hold a value of either "true" or "false".
In this case, the value assigned to the "condition" variable is "false". This means that the "condition" 
variable will always have a value of "false" during runtime, and any condition or expression that 
depends on its value will be evaluated accordingly.
Such variables are typically used to define constants or compile-time configurations that are used in 
different parts of the program. For example, this variable can be used in a conditional statement, 
and since its value is always false, the block of code associated with that condition will always be 
skipped during program execution.
*/