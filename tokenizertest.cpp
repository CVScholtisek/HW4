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
    cout << "Please type in some text. When you are done, type \"end\":" << endl;
    string str;
    vector<string> tokens;
    do{
        Readline(str);
        StringToTokenWS(str,tokens);
    } while (str != "end");


    return 0;
}
