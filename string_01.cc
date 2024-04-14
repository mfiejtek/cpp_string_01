#include "string_01.h"
#include <iostream>



auto main() -> int { 
    //std::cout<<"Podaj string: ";
    std::string input;
    std::getline(std::cin, input);
    //std::cout<<"Podaj substring: ";
    std::string substr;
    std::getline(std::cin, substr);

    // std::cout<<"Reverse: "<<string_toys::reverse(input)<<std::endl;
    string_toys::reverse(input);
    // std::cout<<"First to upper: "<<string_toys::first_to_upper(input)<<std::endl;
    string_toys::first_to_upper(input);
    // std::cout<<"Vowels:  "<<string_toys::count_vowels(input)<<std::endl;
    string_toys::count_vowels(input);
    // std::cout<<"Suma:  "<<string_toys::sum_digits(input)<<std::endl;
    string_toys::sum_digits(input);
    // std::cout<<"Substr:  "<<string_toys::search_substr(input.c_str(), substr.c_str())<<std::endl;
    string_toys::search_substr(input, substr);
    // std::cout<<"Substr:  "<<string_toys::custom_serach(input.c_str(), substr.c_str())<<std::endl;
    string_toys::custom_serach(input.c_str(), substr.c_str());
    
    
    
    
    return 0; 
}
