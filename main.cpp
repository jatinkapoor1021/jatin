#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include <string>

int main()
{
  std::cout << shiftChar('Y',9) << "\n";
  std::cout << shiftChar('y',7) << "\n";
  std::cout << encryptCaesar("The quick brown fox jumps over the lazy dog.", 25) << "\n";
  std::cout << encryptVigenere("The quick brown fox jumps over the lazy dog.", "cake") << "\n";
  std::cout << decryptCaesar("Sgd pthbj aqnvm enw itlor nudq sgd kzyx cnf.", 25) << "\n";
  std::cout << decryptVigenere("Vho uwimo dryap fyb luwtu ofit tri najc foq.", "cake") << "\n";

  return 0;
}