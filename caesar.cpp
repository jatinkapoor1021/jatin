#include "caesar.h"
#include <string>

char shiftChar(char c, int rshift){
    //FOR LOWERCASE LETTERS
    if(c>=97 && c<=122){
        if(rshift>=0 && rshift<=25){
            if(c + rshift>122){
                c = c - 26;
            }            
            c = c + rshift;
        }
    return c;
    }
    //FOR CAPITAL LETTERS
    if(c>=65 && c<=90){
        if(rshift>=0 && rshift<=25){
            c = c + rshift;
        }
        if(c>90){
            c = c - 26;
        }
    return c;
    }
    return c;
}

std::string encryptCaesar(std::string plaintext, int rshift){
    for(int i=0; i<plaintext.size(); i++){
        plaintext[i] = shiftChar((int)plaintext[i], rshift);
    }
    return plaintext;
}