#include "vigenere.h"
#include "caesar.h"
#include <string>

std::string encryptVigenere(std::string plaintext, std::string keyword){
    int counter = 0;
    for(int i=0; i<plaintext.size(); i++){
        plaintext[i] = shiftChar(plaintext[i], keyword[counter] - 'a');
        if((plaintext[i] >= 65 && plaintext[i]<=90) || (plaintext[i] >= 97 && plaintext[i]<=122)){
            counter = counter + 1;
        }
        if(counter == keyword.size()){
            counter = 0;
        }
    }

    return plaintext;
}