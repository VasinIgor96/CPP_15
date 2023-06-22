#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str = "Hello123!@#";

    int letterCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    for (char ch : str) {
        if (std::isalpha(ch)) {
            letterCount++;
        }
        else if (std::isdigit(ch)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Number of letters: " << letterCount << endl;
    cout << "Number of digits: " << digitCount << endl;
    cout << "Number of characters: " << otherCount << endl;

    return 0;
}
