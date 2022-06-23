#include <iostream>
using namespace std;

int main()
{
    cout << "My Calculator" << endl;
    cout << "Enter a = ";
    int a;
    cin >> a;
    cout << "Enter b = ";
    int b;
    cin >> b;
    cout << "1. Addition \n2. Subtraction \n3. Multiplication \n4. Division";
    cout << "Enter your choice : ";
    int n;
    cin >> n;
    int result;
    switch (n)
    {
    case 1:
        result = a + b;
        cout << "Result of " << a << " + " << b << " is " << result << endl;
        break;
    case 2:
        result = a - b;
        cout << "Result of " << a << " - " << b << " is " << result << endl;
        break;
    case 3:
        result = a * b;
        cout << "Result of " << a << " * " << b << " is " << result << endl;
        break;
    case 4:
        result = a / b;
        cout << "Result of " << a << " / " << b << " is " << result << endl;
        break;
    default:
        cout << "Wrong selection" << endl;
        break;
    }
}