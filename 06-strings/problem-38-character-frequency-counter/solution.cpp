#include <iostream>
using namespace std;

int main() {
    string s;
    char target;
    cin >> s >> target;

    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == target) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
