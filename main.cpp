#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include <string>





int main() {
    std::cout << shiftChar('Z', 9) << "\n";
    std::cout << shiftChar('x', 7) << "\n";
    std::cout << encryptCaesar("The cat in the hat.", 3) << "\n";
    std::cout << encryptVigenere("I like to eat pizza and pasta.", "secret") << "\n";
    std::cout << decryptCaesar("Qeb jxw lmtk qeb lew.", 3) << "\n";
    std::cout << decryptVigenere("L dzct gv drj vskgb gbd yvnw.", "secret") << "\n";
    return 0;
}