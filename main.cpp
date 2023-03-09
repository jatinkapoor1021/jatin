#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include <string>

int main()
{
  std::cout << shiftChar('Q', 3) << "\n"; // outputs T
  std::cout << shiftChar('q', 7) << "\n"; // outputs x
  std::cout << encryptCaesar("The cat in the hat", 12) << "\n"; // outputs ftq mmd uz ft tmd
  std::cout << encryptVigenere("The cat in the hat", "key") << "\n"; // outputs Ufi fbu km yfq
  std::cout << decryptCaesar("Pda xyq ef pda zpe", 6) << "\n"; // outputs The cat in the hat
  std::cout << decryptVigenere("Tqd dom ed tcc", "key") << "\n"; // outputs The cat in the hat


  return 0;
}