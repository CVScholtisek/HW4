//
// Created by Clinterpottrmus on 2/25/2021.
//

#include <iostream>
#include <vector>
#include <sstream>
#include "tokenizer.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;
using std::getline;
using std::istringstream;

bool Readline(string& str){
    getline(cin,str);
    if (str == ""){
        return false;
    } else{
        return true;
    }
}

unsigned StringToTokenWS(const string& input, vector<string>& tokens){
    //split string around spaces
    istringstream instream(input);
    //store word
    string word;
    //initialize number of token count
    int tokennum = 0;
    //for each word, add word to vector and increase token count by one
    while (instream >> word){
        tokens.push_back(word);
        tokennum += 1;
    }
    //If line is empty, add empty object to vector
    if (input == ""){
        tokens.push_back("");
    }
    return tokennum;


}