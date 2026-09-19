#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool isPalindrome = true;
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
