#include <iostream>

int main(){
    
    signed int value1 {10};
    signed int value2 {-10};
    
    std::cout << " Value1 : " << value1 << std::endl ;
    std::cout << " Value2 : " << value2 << std::endl ;

    std::cout << " Size of Value1 : " << sizeof(value1) << std::endl ;
    std::cout << " Size of Value2 : " << sizeof(value2) << std::endl ;

    //short and long 
    short short_var {-32768};               //2 Bytes
    short int short_int {455};   
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int  {456}; 

    int int_var {55};                      //4 Bytes 
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {88};

    long long_var {100};                   //4 or 8 Bytes 
    long int long_int {200};
    signed long signed_long {300};
    signed long int signed_long_int {400};
    unsigned long int unsigned_long_int {500};

    long long long_long {600};              //8 Bytes 
    long long int long_long_int {900};
    signed long long signed_long_long {1000};
    signed long long int signed_long_long_int {400};
    unsigned long long int unsigned_long_long_int {500};

    std::cout << "------------------------------------------------------------------------" << std::endl ;

    std::cout << " Short : " << short_var << " , size : " <<  sizeof(short_var) << " bytes" << std::endl ;
    std::cout << " Short int : " << short_int << " , size : " <<  sizeof(short_int) << " bytes" << std::endl ;
    std::cout << " Signed short : " << signed_short << " , size : " <<  sizeof(signed_short) << " bytes" << std::endl ;
    std::cout << " Signed short int : " << signed_short_int << " , size : " <<  sizeof(signed_short_int) << " bytes" << std::endl ;
    std::cout << " Unsigned short int : " << signed_short_int << " , size : " <<  sizeof(signed_short_int) << " bytes" << std::endl ;


     

    

    return 0;

}