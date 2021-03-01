#include <iostream>
#include <vector>
#include "tokenizer.h"
using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;
using std::getline;



int main() {
    //Initialize prompt
    cout << "Please type in some text. When you are done, type \"end\":" << endl;

    //initialize string (whole line of text)
    string str;

    //initialize vector for each token to be put in
    vector<string> tokens;

    //do while loop that exits with end command
    do{

        //Prompts and reads line, inputs to str string, returns false if empty
        Readline(str);

        //Processes string, breaks up words by whitespace, puts each word into token vector
        //returns number of tokens in line
        StringToTokenWS(str,tokens);

        for (int i=0;i < tokens.size();i++){
            cout << tokens.at(i) << endl;
        }
    } while (str != "end");

    return 0;
}
