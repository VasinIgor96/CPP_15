#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string& str) {
    istringstream iss(str);
    int wordCount = 0;
    string word;

    while (iss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    string str = "This is a string with several words";

    int numWords = countWords(str);

    cout << "Number of words: " << numWords << endl;

    return 0;
}
