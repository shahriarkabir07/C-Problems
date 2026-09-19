#include <iostream>
using namespace std;

int main() {
    int n, original;
    cin >> n;
    original = n;

    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == original) {
        cout << "Armstrong" << endl;
    } else {
        cout << "Not Armstrong" << endl;
    }

    return 0;
}
