#include <iostream>
#include <string>
#include <algorithm>

//3.10 read string, output string with punctuations removed
string removePunct(string s){
    for(auto &c:s) if(ispunct(c)) s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end());
    return s;
}

int main() {
    string str2("I'm Alice, I like cats and hats! ^OwO^");
    cout << removePunct(str2) << endl;
    return 0;
}
