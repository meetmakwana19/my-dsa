#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "I am A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "I am B" << endl;
    }
};
class C : public A, public B
{
public:
    void funcC()
    {
        cout << "C" << endl;
    }
};
int main()
{
    // A a;
    // a.func();
    // cout << endl;

    // cout << endl;
    // B b;
    // b.func();

    cout << "Ambiguity resolved :" << endl;
    C c;
    c.funcC();
    c.A::func();
    c.B::func();
}