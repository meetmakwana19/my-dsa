#include <iostream>
using namespace std;

int main()
{
    cout << "Enter amount to estimate currency notes : ";
    int n;
    cin >> n;
    int n1000, n500, n200, n100, n50, n20, n10;
    int left_amount = n;

    switch (left_amount >= 1000)
    {
    case 1:
        n1000 = n / 1000;
        left_amount = n - (n1000 * 1000);
        cout << "1000 notes : " << n1000 << endl;
        // cout << "Left amount = " << left_amount << endl;
        break;
    }
    switch (left_amount >= 500)
    {
    case 1:
        n500 = n / 500;
        left_amount = n - (n500 * 500);
        cout << "500 notes : " << n500 << endl;
        // cout << "Left amount = " << left_amount << endl;
        break;
    }
    switch (left_amount >= 200)
    {
    case 1:
        n200 = n / 200;
        left_amount = n - (n200 * 200);
        cout << "200 notes : " << n200 << endl;
        // cout << "Left amount = " << left_amount << endl;
        break;
    }
    switch (n >= 100)
    {
    case 1:
        n100 = n / 100;
        left_amount = n - (n100 * 100);
        cout << "100 notes : " << n100 << endl;
        // cout << "Left amount = " << left_amount << endl;
        break;
    }
    switch (n >= 50)
    {
    case 1:
        n50 = n / 50;
        left_amount = n - (n50 * 50);
        cout << "50 notes : " << n50 << endl;
        // cout << "Left amount = " << left_amount << endl;
        break;
    }
    switch (n >= 20)
    {
    case 1:
        n20 = n / 20;
        left_amount = n - (n20 * 20);
        cout << "20 notes : " << n20 << endl;
        // cout << "Left amount = " << left_amount << endl;
        break;
    }
    switch (n >= 10)
    {
    case 1:
        n10 = n / 10;
        left_amount = n - (n10 * 10);
        cout << "10 notes : " << n10 << endl;
        // cout << "Left amount = " << left_amount << endl;
        break;
    }
}