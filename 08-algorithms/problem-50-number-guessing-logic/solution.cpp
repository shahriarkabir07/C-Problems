#include <iostream>
using namespace std;

int main() {
    int n, hidden;
    cin >> n >> hidden;

    int low = 1, high = n, guesses = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        guesses++;

        if (mid == hidden) {
            break;
        } else if (mid < hidden) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << guesses << endl;

    return 0;
}
