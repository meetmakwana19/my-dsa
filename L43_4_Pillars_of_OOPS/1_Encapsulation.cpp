#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
    // encapsulation achieved by putting all members together in private
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student first;
    cout << "Age is " << first.getAge() << endl;
}