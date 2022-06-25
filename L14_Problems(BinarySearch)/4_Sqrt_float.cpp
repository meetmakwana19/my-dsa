// To find square roots in decimal

#include <iostream>
using namespace std;

int sqrtInt(int x)
{
    int start = 0, end = x;
    long long int mid = start + ((end - start) / 2);

    long long int ans = -1;

    // start binary search
    while (start <= end)
    {
        // using long for higher number products
        long long int square = mid * mid;

        if (square == x)
        {
            return mid;
        }
        else if (square > x)
        {
            end = mid - 1;
        }
        else if (square < x)
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

// using double(64 bytes) instead of float(32 bytes)
double decimalSqrt(int n, int precision, int tempSolu)
{

    double factor = 1;
    double ans = tempSolu;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        // put ans i.e. tempSolu in j
        // loop if j*j<n is True
        // if true then put that in and in j
        // then add the factor(0.1 or 0.01 or 0.001) into that ans j
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter n to find it's square root = ";
    cin >> n;

    cout << "Square root of " << n << " is -----> " << sqrtInt(n);

    cout << endl;
    int tempSolu = sqrtInt(n);
    cout << "Square root of " << n << " is -----> " << decimalSqrt(n, 10, tempSolu);
}