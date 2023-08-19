#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <sstream>
using namespace std;

class Letters{
    set<string> originalWords;
    public:

    string removeSymbols(string word) {
    string processed;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 'A' && word[i] <= 'Z' || word[i] >= 'a' && word[i] <= 'z') {
            processed += word[i];
        }
    }
        return processed;
    }

    
    Letters(){
        string line;
        getline(cin >> ws, line);
        istringstream istr(line);

        string piece;
        while (istr >> piece) {
        originalWords.insert(removeSymbols(piece));
        }

    }


};

int main(){

    Letters obj1;


    return 0;
}

/*
Input:

You are given a text in English. Let’s define a word as any sequence of alphabetical characters.
Each of those characters we’ll call a letter, but we will consider the uppercase and lowercase
variant of a character in a word as the same letter.
a
Y
h
.


Output:

Each a alphabetical and any are as call character characters lowercase same uppercase variant
You any
Each English alphabetical character characters the those





*/