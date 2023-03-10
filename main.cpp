#include <iostream>
#include <string>
#include <cctype>
#include "decrypt.h"
#include "vigenere.h"
#include "caesar.h"


int main(){
    std::cout<<shiftChar('a', 25)<<"\n";
    std::cout<<shiftChar('z', 25)<<"\n";

    std::cout<<encryptCaesar("Hello, how are you!", 10)<<"\n";
    std::cout<<encryptCaesar("What are you doing?", 10)<<"\n";

    std::cout<<decryptCaesar("Stgffe, sta frp yui!", 10)<<"\n";
    std::cout<<decryptCaesar("Hyio tui pou iytdse?", 10)<<"\n";

    std::cout<<encryptVigenere("Hello my friends!", "cake")<<"\n";
    std::cout<<encryptVigenere("What is the plan for this weekend!", "power")<<"\n";

    std::cout<<decryptVigenere("Jrtuv hj uioprve!", "cake")<<"\n";
    std::cout<<decryptVigenere("Hruj ip typ efhk ipe onvc yjuqwel", "power")<<"\n";
    
    
}
