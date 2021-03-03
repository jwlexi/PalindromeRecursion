#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

bool isPalindrome(string s);
int main() {
    string userinput, str;
    getline(cin, userinput);
    for (int i=0; i<userinput.length(); i++){
        if(isalnum(userinput.at(i))){
            str += (tolower(userinput.at(i)));
        }
    }
    if(isPalindrome(str)) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
    return EXIT_SUCCESS;
}
bool isPalindrome(string s) {
    int length = s.length();
    char firstCh = s.at(0);
    char lastCh = s.at(length-1);
    if(length < 2) {
        return true;
    }
    return firstCh == lastCh && isPalindrome(s.substr(1, length-2));
}
