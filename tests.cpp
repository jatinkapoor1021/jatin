#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("TESTS"){
    CHECK(shiftChar('a', 25) == 'z');
    CHECK(shiftChar('z', 25) == 'y');
    CHECK(encryptCaesar("Hello, how are you!", 10) == "Stgffe, sta frp yui!");
    CHECK(encryptCaesar("What are you doing?", 10) == "Hyio tui pou iytdse?");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, how are you!");
    CHECK(decryptCaesar("Grkd k coxdoxmo", 10) == "What are you doing?");
    CHECK(encryptVigenere("Hello my friends!", "cake") == "Jrtuv hj uioprve!");
    CHECK(encryptVigenere("What is the plan for this weekend!", "power") == "Hruj ip typ efhk ipe onvc yjuqwel");
    CHECK(decryptVigenere("Jrtuv hj uioprve!", "cake") == "Hello my friends!");
    CHECK(decryptVigenere("Hruj ip typ efhk ipe onvc yjuqwel", "power") == "What is the plan for this weekend!");
}