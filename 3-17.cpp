//3.17 Read sequence of words to vector, change each word to upper case, print eight words per line
void three_seventeen(){
    string word;
    vector<string> words;
    int cnt = 0;
    while(cin >> word){
        words.push_back(word);
    }
    for(string &word: words){
        for(char &c:word) c=toupper(c);
        cout << word << " ";
        ++cnt;
        if(cnt%8 == 0) cout << endl;
    }
}
