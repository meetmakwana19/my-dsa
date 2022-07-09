#include <iostream>
using namespace std;

int main()
{
    int first = 8;
    int second = 18;

    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;

    int first1 = 6;
    int *p = &first1;
    int *q = p;
    (*q)++;
    cout << first1 << endl;

    int first2 = 8;
    int *p2 = &first2;
    cout << (*p2)++ << " "; // post increment
    cout << first2 << endl;

    // int *p4 = 0; // null poiner
    // int first4 = 110;
    // *p4 = first4;
    // cout << p4 << endl;
    // no result due segmentation fault occured bby null pointer

    int first5 = 8;
    int second5 = 11;
    int *third5 = &second5;
    first5 = *third5;
    *third5 = *third5 + 2;
    cout << first5 << " " << second5 << endl;

    float f = 12.5;
    float p6 = 21.5;
    float *ptr6 = &f;
    (*ptr6)++;
    *ptr6 = p6;
    cout << *ptr6 << " " << f << " " << p6 << endl;
}