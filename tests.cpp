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
// zamansky specifications 4/17/2023
    TEST_CASE("Frequency Cases"){
        CHECK(freq('a',"aaaa")==100);
        CHECK(freq('o', "hello world") == doctest::Approx(18.1818));
}

    TEST_CASE("Distance Cases"){
        double a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        double b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        CHECK(distance(a,b) == 0);
}

    TEST_CASE("Solve using probability"){
        CHECK(solve(encryptCaesar("I love cats from the moon and back", 10))=="I love cats from the moon and back");
        CHECK(solve(encryptCaesar("Programming is my favorite weekend activity", 15))=="Programming is my favorite weekend activity");
}