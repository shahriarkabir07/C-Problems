#include <iostream>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    int evenCount = 0, oddCount = 0;
    for (int i = l; i <= r; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << evenCount << " " << oddCount << endl;

    return 0;
}
