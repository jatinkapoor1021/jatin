#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Task B Tests"){
    CHECK(shiftChar('Y',9) == 'H');
    CHECK(shiftChar('y',7) == 'f');
    CHECK(encryptCaesar("The early bird catches the worm.", 25) == "Znt ejcpw dzqgx fkb rgovk vjku nqy.");
}

TEST_CASE("Task C Test"){
    CHECK(encryptVigenere("The early bird catches the worm.", "cake") == "Qeb nfamj xjwcn ugp yqtnk xctc lcp.");   
}

TEST_CASE("Task D Tests"){
    CHECK(decryptCaesar("Znt ejcpw dzqgx fkb rgovk vjku nqy.", 25) == "The early bird catches the worm.");
    CHECK(decryptVigenere("Qeb nfamj xjwcn ugp yqtnk xctc lcp.", "cake") == "The early bird catches the worm.");
}