#include <iostream>
#include <string>

std::string ascii_converter(std::string text){
    std::string result;
    for(int i=0; i<text.size(); i++){
        result = result + text[i] + " " + std::to_string((int)text[i]) + "\n";
    }    
    return result;
}

int main(){

    std::cout << ascii_converter("The early bird catches the worm.");
    
    return 0;
}