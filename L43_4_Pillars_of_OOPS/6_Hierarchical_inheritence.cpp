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
class C : public A
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

    C c;
    c.funcA();
    c.funcC();

    B b;
    b.funcA();
    b.funcB();
}