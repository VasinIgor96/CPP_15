#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main() {
    string str = "level";

    if (isPalindrome(str)) {
        cout << "The string is a palindrome" << endl;
    }
    else {
        cout << "The string is not palindromic" << endl;
    }

    return 0;
}
