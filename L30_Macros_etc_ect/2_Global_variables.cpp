#include <iostream>
using namespace std;

// global variables buy it is a bad practise ass any functioon can change it and affect the code
// prefer reference variables
int score = 15;

// void a(int i) //diff copy of i made as passed as value parameters
void a(int &i) // diff address of i made as passed as reference parameter
{
    cout << &i << endl;
    cout << i << endl;
    cout << "score in a " << score << endl;
}
int main()
{
    int i = 5;
    cout << &i << endl;
    a(i);
    cout << "score in main " << score << endl;
}