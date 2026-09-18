#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cin >> num1 >> num2 >> op;

    double result;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    }

    cout << result << endl;

    return 0;
}
