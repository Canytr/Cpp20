#include <iostream>

int main(){


     const unsigned int COUNT{10};
     unsigned int i{0};

     do{
          std::cout<< i <<" : I Love C++"<<std::endl;
          ++i;
     } while (i<COUNT);

     std::cout<<"Loop Done!"<<std::endl;     

     //Trick
     
     /*
     const unsigned int COUNT{0};
     unsigned int i{0};

     do{
          std::cout<< i <<" : I Love C++"<<std::endl;
          ++i;
     } while (i<COUNT);

     std::cout<<"Loop Done!"<<std::endl;

     //OUTPUT 
     0 : I Love C++
     Loop Done!
     
     */


     return 0;
}