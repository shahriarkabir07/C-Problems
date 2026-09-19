#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;

    cout << missing << endl;

    return 0;
}
