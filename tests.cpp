#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Task B Tests"){
    CHECK(shiftChar('Y',9) == 'H');
    CHECK(shiftChar('y',7) == 'f');
    CHECK(encryptCaesar("The quick brown fox jumps over the lazy dog.", 25) == "Sgd pthbj aqnvm enw itlor nudq sgd kzyx cnf.");
}

TEST_CASE("Task C Test"){
    CHECK(encryptVigenere("The quick brown fox jumps over the lazy dog.", "cake") == "Vho uwimo dryap fyb luwtu ofit tri najc foq.");   
}

TEST_CASE("Task D Tests"){
    CHECK(decryptCaesar("Sgd pthbj aqnvm enw itlor nudq sgd kzyx cnf.", 25) == "The quick brown fox jumps over the lazy dog.");
    CHECK(decryptVigenere("Vho uwimo dryap fyb luwtu ofit tri najc foq.", "cake") == "The quick brown fox jumps over the lazy dog.");
}