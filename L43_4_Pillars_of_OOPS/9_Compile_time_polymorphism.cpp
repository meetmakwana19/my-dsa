#include <iostream>
using namespace std;

class A
{
public:
    // function overloading
    void sayHello()
    {
        cout << "Hello I'm Meet" << endl;
    }
    // Cannot overload functions by changing it's return type
    // int sayHello()
    // {
    //     return 1;
    // }
    void sayHello(string name)
    {
        cout << "Hello I'm Meet" << name << endl;
    }
};

class B
{
public:
    int a;

public:
    // operator overloading
    void operator+(B &obj)
    {
        cout << "Hello from + " << endl;
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output----> " << value2 - value1 << endl;
    }
    void operator%(int a)
    {
        cout << "Main percent sign hu lol " << a << endl;
    }
    void operator()()
    {
        cout << "I am brackets hehehe" << endl;
    }
};
int main()
{
    // for function overloading
    A obj;
    obj.sayHello();
    obj.sayHello(" Avenger");

    // for operator overloading
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    // calling operator overloaded functions
    obj1 + obj2;
    obj1 % (5);
    obj2();
}