#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Task B Tests"){
    CHECK(shiftChar('Z',9) == 'T');
    CHECK(shiftChar('x',7) == 'x');
    CHECK(encryptCaesar("The cat in the hat.", 3) == "Pda xyq ef pda zpe.");
}

TEST_CASE("Task C Test"){
    CHECK(encryptVigenere("I like to eat pizza and pasta.", "secret") == "Tqd dom ed tcc.");   
}

TEST_CASE("Task D Tests"){
    CHECK(decryptCaesar("Qeb jxw lmtk qeb lew.", 3) == "The cat in the hat.");
    CHECK(decryptVigenere("L dzct gv drj vskgb gbd yvnw.", "secret") == "I like to eat pizza and pasta.");
}