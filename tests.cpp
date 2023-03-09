#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Task B Tests"){
    CHECK(shiftChar('Y',9) == 'H');
    CHECK(shiftChar('y',7) == 'f');
    CHECK(encryptCaesar("The cat in the hat.", 12) == "Pda xyq ef pda zpe.");
}

TEST_CASE("Task C Test"){
    CHECK(encryptVigenere("The cat in the hat.", "key") == "Tqd dom ed tcc.");   
}

TEST_CASE("Task D Tests"){
    CHECK(decryptCaesar("Pda xyq ef pda zpe.", 6) == "The cat in the hat.");
    CHECK(decryptVigenere("Tqd dom ed tcc.", "key") == "The cat in the hat.");
}