#include <iostream>

int main(){

    const unsigned int COUNT{100};
	unsigned int i{0}; //defined iterator

	while (i<COUNT)
	{
		std::cout<<i<<": I Love C++"<<std::endl;
		++i;
	}
	std::cout<<"End of While loop"<<std::endl;

	return 0;
}