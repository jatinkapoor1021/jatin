#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include <string>

int main()
{
  std::cout << shiftChar('Y',9) << "\n";
  std::cout << shiftChar('y',7) << "\n";
  std::cout << encryptCaesar("The early bird catches the worm.", 25) << "\n";
  std::cout << encryptVigenere("The early bird catches the worm.", "cake") << "\n";
  std::cout << decryptCaesar("Znt ejcpw dzqgx fkb rgovk vjku nqy.", 25) << "\n";
  std::cout << decryptVigenere("Qeb nfamj xjwcn ugp yqtnk xctc lcp.", "cake") << "\n";

  return 0;
}