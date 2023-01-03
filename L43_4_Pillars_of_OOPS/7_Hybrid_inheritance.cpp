#include <iostream>
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "B" << endl;
    }
};
class D
{
public:
    void funcD()
    {
        cout << "D" << endl;
    }
};

class C : public A, public D
{
public:
    void funcC()
    {
        cout << "C" << endl;
    }
};
int main()
{
    A a;
    a.funcA();
    cout << endl;
    C c;
    c.funcC();
    c.funcA();
    c.funcD();

    cout << endl;
    B b;
    b.funcB();
    b.funcA();

    cout << endl;
    D d;
    d.funcD();
}