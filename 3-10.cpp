#include <iostream>
#include <string>
#include <algorithm>

//3.10 read string, output string with punctuations removed
string removePunct(string s){
    /* erase-remove_if idiom: remove-if moves all elements which matches condition to the end, and 
    returns the position of the first matching element; erase then remove starting from this position
    to the end of the string */
    /* use :: before ispunct(),isspace() and isdigit() to not have them interpreted as std::ispunct(), etc.*/
    for(auto &c:s) if(ispunct(c)) s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end());
    return s;
}

int main() {
    string str2("I'm Alice, I like cats and hats! ^OwO^");
    cout << removePunct(str2) << endl;
    return 0;
}
