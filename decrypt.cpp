#include "decrypt.h"
#include "caesar.h"
#include "vigenere.h"
#include <string>

std::string decryptCaesar(std::string ciphertext, int rshift){
    ciphertext = encryptCaesar(ciphertext,(26-rshift));
    return ciphertext;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    for(int i=0; i<keyword.size(); i++){
        keyword[i] = 'z'-(keyword[i]-'a')+1;
    }
    ciphertext = encryptVigenere(ciphertext,keyword);
    return ciphertext;
}