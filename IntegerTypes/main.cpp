#include <iostream>


int main()
{
    //Bracked initializers

    //Variable may contain random garbage value. WARNING
    int cat_count;

    int dog_count{};           //initializes to zero 
 
    int human_count{10};       //initializes to 10

    int ai_count{20};          //initializes to 20 

    //Can use expression to initializer
    int sum_count{human_count + ai_count};

    //Compiler error
    //int number{doesnt_exist};

    std::cout << "Cat Count : " << cat_count << std::endl ;
    std::cout << "Dog Count : " << dog_count << std::endl ;
    std::cout << "Human Count : " << human_count << std::endl ;
    std::cout << "Ai Count : " << ai_count << std::endl ;
    std::cout << "Sum Count : " << sum_count << std::endl ;

    return 0;

}