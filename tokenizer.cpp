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
    //add empty object to vector at end of line
    tokens.push_back("");
    return tokennum;
}

void AnalyzeTokens(vector<string>& tokens){
    vector<string> tokentype;
    for (auto i:tokens){
        int tempint = 0;
        //check if token is whitespace
        if (i == ""){
            tokentype.push_back("whitespace");
            continue;
        }else{
            //check if token is integer
            for (auto x:i){
                if (isdigit(x)){
                    tempint += 1;
                }
            }
            if (tempint == i.length()){
                tokentype.push_back("integer   ");
            }

            //check if token is identifier
            else if (isalpha(i.at(0)) or i.at(0) == '_'){
                tokentype.push_back("identifier");
            }
            //check if token is string
            else if (i.front() == '"' and i.back() == '"'){
                tokentype.push_back("string    ");
            }
            //check if token is unknown
            else{
                tokentype.push_back("unknown   ");
            }
        }

    }
    //Print out token type and corresponding token
    for (int i = 0; i < tokentype.size() - 1;i++){
        cout << "[" << tokentype[i] << "]  -  \"" << tokens[i] << "\"" << endl;
    }
}