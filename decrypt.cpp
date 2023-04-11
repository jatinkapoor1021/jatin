#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string plain;
    int sub = 26 - rshift;
    for(int i = 0; i < ciphertext.length(); i++){
        if(isalpha(ciphertext[i]) == true){
            plain += shiftChar(ciphertext[i],sub);
        }
        else{
            plain += ciphertext[i];
        }
    }
    return plain;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    std::string plain1;
    int j = 0;
    for(int i = 0; i < ciphertext.length(); i++){
        if(j > keyword.length() - 1){
            j = 0;
        }
        if(isalpha(ciphertext[i]) == true){
            plain1 += shiftChar(ciphertext[i], 26 - (keyword[j] - 97));
            j += 1;
        }
        else{
            plain1 += ciphertext[i];
        }
    }
    return plain1;
} 


    
double freq(char letter, std::string encrypted_str){
    int len = encrypted_str.length();
    double freq = 0; 
    for(int i = 0; i < len; i++){ 
        if(tolower(encrypted_str[i]) == tolower(letter)){ 
            freq++; 
        }
    }
    freq = freq/len * 100; 
    return freq;
}


double distance(double * letter, double * encrypted){
    double result = 0; 
    for(int i = 0; i < 26; i++){
        result += pow(letter[i]-encrypted[i],2);
    }
    result = sqrt(result);
    return result;
}


string solve(string encrypted_str){
    string result; 
    char letter[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
       
    double letterFreq[26] = {8.2,1.5,2.8,4.3,13,2.2,2,6.1,7,0.15,0.77,4,2.4,6.7,7.5,1.9,0.095,6,6.3,9.1,2.8,0.98,2.4,0.15,2,0.074};
        
    double encryptFreq[26] = {};
    for(int i = 0; i < 26; i++){ 
        encryptFreq[i] = freq(letter[i], encrypted_str);
    }
    string rotation; 
    int shift; 
    double lowestDist = distance(letterFreq, encryptFreq); 
    for(int j=0; j < 26; j++){ 
        rotation = decryptCaesar(encrypted_str, j); 
        for(int k = 0; k < 26; k++){ 
            encryptFreq[k] = freq(letter[k], rotation);
        }
        if(lowestDist > distance(letterFreq,encryptFreq)){ 
            shift = j;
            lowestDist = distance(letterFreq,encryptFreq);
            result = decryptCaesar(encrypted_str, shift);
        }
    }
    return result;
}