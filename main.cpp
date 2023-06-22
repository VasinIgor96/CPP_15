#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

int main() {

   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

    string str = "В цему рядку є пробіли";

    replace(str.begin(), str.end(), ' ', '\t');

    cout << str << endl;

    return 0;
}
