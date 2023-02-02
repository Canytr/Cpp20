#include <iostream>

int main()
{
    //Test using cpp20
    auto result = (10<=>20)>0;
    std::cout << result << std::endl;
}