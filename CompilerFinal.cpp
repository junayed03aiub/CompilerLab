#include <iostream>
using namespace std;

int main() {
    char s[100];
    int i = 0, flag = 1;

    cout << "Enter string: ";
    cin >> s;

    while (s[i] == 'a') {
        i++;
    }
    while (s[i] == 'b') {
        i++;
    }

    if (s[i] != '\0') {
        flag = 0;
    }

    if (flag == 1)
        cout << "String accepted";
    else
        cout << "String not accepted";

    return 0;
}
