#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    return largest;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << maxOfThree(a, b, c) << endl;

    return 0;
}
