#include <iostream>
using namespace std;

string units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string convert(long n)
{
    if (n < 10)
    {
        return units[n];
    }
    else if (n < 20)
    {
        return teens[n % 10];
    }
    else if (n < 100)
    {
        // n = 84
        // n/10= 8.... So, tens[8] = eighty
        // n%10 = 4 which is != 0 ..... so, recursive call.
        return tens[n / 10] + ((n % 10 != 0) ? " " + convert(n % 10) : "");
    }
    else if (n < 1000)
    {
        // n = 547
        // n/100 = 5.47....so,  units[5] = five
        // and
        // n%100 = 47 which is != 0 ..... so, convert 47
        return units[n / 100] + " hundred" + ((n % 100 != 0) ? " and " + convert(n % 100) : "");
    }
    // 1 lakh
    else if (n < 100000)
    {
        // n == 5002
        // n%1000 = 2 == n%100 = 2 & n%1000 != 0... So "and"
        // else for n = 5436
        // n%1000 = 436 == n%100 = 36 is false... So else condition
        // 436 != 0..... So convert() it else leave it.
        return convert(n / 1000) + " thousand " + ((n % 1000 == n % 100 && n % 1000 != 0) ? "and " + convert(n % 100) : ((n % 1000 != 0) ? convert(n % 1000) : ""));
    }
    // 1 crore
    else if (n < 10000000) // 7 zeros
    {

        // append "and" in 1ft conditin only if the last units place is not zero
        return convert(n / 100000) + " lakh " + ((n % 100000 == n % 10000 && n % 100000 == 0 && n % 10000 != 0) ? "and " + convert(n % 100000) : ((n % 100000 != 0) ? convert(n % 100000) : ""));
    }
    // 100 crore
    else if (n < 1000000000) // 9 zeros
    {
        return convert(n / 10000000) + " crore " + ((n % 100000 == 0 && n % 10000000 == 0) ? "and " + convert(n % 10000000) : ((n % 10000000 != 0) ? convert(n % 10000000) : ""));
    }
}
int main()
{
    long n;
    cout << "Enter the number :";
    cin >> n;

    cout << convert(n);
}