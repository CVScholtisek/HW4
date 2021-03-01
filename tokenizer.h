//
// Created by Clinterpottrmus on 2/25/2021.
//

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;

#ifndef HW4_TOKENIZER_H
#define HW4_TOKENIZER_H

//uses std::getline() to get a line of text from the user. It should return true if it read
//the string and false if the string was a blank line
bool Readline(string& str);

//uses istringstream to read strings separated by whitespace characters. Push a blank string
//at the end of each line. It should return the number of tokens read from the string.
unsigned StringToTokenWS(const string& input, vector<string>& tokens);

//determines if token is integer, identifier(starts with letter of underscore character and
//followed by A-Z,a-z,0-9,or_), string, whitespace, or unknown. Should print out type of
//token surrounded by quotation marks
void AnalyzeTokens(vector<string>& tokens);


#endif //HW4_TOKENIZER_H
