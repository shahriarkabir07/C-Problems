#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int length = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        length++;
    }

    cout << length << endl;

    return 0;
}
