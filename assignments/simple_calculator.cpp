#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter first number: "; cin >> a;
    cout << "Enter operator (+, -, *, /): "; cin >> op;
    cout << "Enter second number: "; cin >> b;
    switch (op) {
        case '+': cout << "Result = " << a + b; break;
        case '-': cout << "Result = " << a - b; break;
        case '*': cout << "Result = " << a * b; break;
        case '/': if (b == 0) cout << "Error: Division by zero is not allowed."; else cout << "Result = " << a / b; break;
        default: cout << "Error: Invalid operator.";
    }
    cout << '\n';
    return 0;
}
