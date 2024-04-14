#ifndef CPP_STRING_H
#define CPP_STRING_H

#include <string>
#include <sstream>
#include <cctype>

namespace string_toys {

auto reverse(const std::string& str) -> std::string {
    std::string odw_string{str};
    int dlugosc_stringa = str.length();
    for(int i=0; i<dlugosc_stringa; ++i){
        odw_string[i] = str[dlugosc_stringa-i-1];
    }
    return odw_string;

}

auto first_to_upper(const std::string& str) -> std::string {
    std::stringstream ss(str);
    std::string word;
    std::string ftu_string;
    while(ss>>word){
        word[0] = toupper(word[0]);
        ftu_string += word + " ";
    }
    return ftu_string.substr(0, ftu_string.length()-1);
}

auto count_vowels(const std::string& str) -> int {
    int licznik = 0;
    for(char c: str){
        char lower = tolower(c);
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u'){
            licznik++;
        }
    }
    return licznik;
}

auto sum_digits(const std::string& str) -> int {
    std::stringstream ss(str);
    std::string word;
    int suma = 0;

    while(ss>>word){
        for(char c: word){
            if(isdigit(c)){
                suma += c - '0';
            }
        }    
    }
    return suma;
}

auto search_substr(const std::string& str, const std::string& substr) -> int {
    int dlugosc_stringa = str.length();
    int dlugosc_substr = substr.length();
    
    if(dlugosc_substr>dlugosc_stringa){
        return -1;
    } 

    for(int i=0; i <= dlugosc_stringa - dlugosc_substr; ++i){
        int j;
        for(j=0; j < dlugosc_substr; ++j){
            if(str[i+j] != substr[j]){
                break;
            }
        }
        if(j == dlugosc_substr){
            return i;
        }
    }
    return -1;

}

auto custom_serach(const char* str, const char* substr) -> int {
    int dlugosc_stringa = 0;
    int dlugosc_substr = 0;

    while(str[dlugosc_stringa]!='\0'){
        dlugosc_stringa++;
    }
    while(substr[dlugosc_substr]!='\0'){
        dlugosc_substr++;
    }

    if(dlugosc_substr>dlugosc_stringa){
        return -1;
    } 

    for(int i=0; i <= dlugosc_stringa - dlugosc_substr; ++i){
        int j;
        for(j=0; j < dlugosc_substr; ++j){
            if(str[i+j] != substr[j]){
                break;
            }
        }
        if(j == dlugosc_substr){
            return i;
        }
    }
    return -1;
}

}  // namespace string_toys

#endif /* CPP_STRING_H */
