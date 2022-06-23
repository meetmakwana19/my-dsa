#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    char ch = '1';

    cout << "Switch Case" << endl;
    // exit(0);
    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break;
    case '1':
        switch (n)
        {
        case 1:
            cout << "Inside nested switch case. " << endl;
            // break;
            // if break; is not there then the execution will continue down the program untill switch case finished or encounters a break
            // break breaks the loop and comes out of the switch case { }

            // IMP ******
            // continue; //continue is not valid in switch case and will give error

        default:
            cout << "Inside nested default" << endl;
            // break;
        }
    // default is not compulsory to write
    default:
        cout << "Inside default" << endl;
        break;
    }

    while (1)
    {
        switch (n)
        {
        case 1:
            cout << "2nd switch" << endl;
            // break;
            exit(0); // terminates the whole program at once
        }
        cout << "infinite while loop" << endl;
    }
}