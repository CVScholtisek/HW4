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
    cout << "Please type in some text. When you are done, type \"End\", \"end\", or \"END\":" << endl;
    string str;
    getline(cin,str);
    while (str != "end" or str != "END" or str != "End"){
        Readline(str);
    }

    return 0;
}
