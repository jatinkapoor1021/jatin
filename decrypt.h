#pragma once
#include <iostream>
#include <string>

std::string decryptCaesar(std::string ciphertext, int rshift);
std::string decryptVigenere(std::string ciphertext, std::string keyword);

std::string decryptVigenere(string ciphertext, string keyword);
std::string solve(string encrypted_string);
double distance(double * letter, double * encrypted);
double freq(char letter, string encrypted_string);

#endif