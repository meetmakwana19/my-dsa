#include <iostream>
using namespace std;

class Human
{
public:
    // protected:
    // private:
    int heigth;
    int age;
    int weight;

public:
    int getAge()
    {
        return this->age;
    }
    int getHeight()
    {
        return this->heigth;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

// inheriting Human class in public mode
class Male : public Human

// inheriting Human class in protected mode means data members will work as private untill it is inherited down more
// class Male : protected Human

// inheriting Human class in public mode
// class Male : private Human
{
public:
    int color;
    void sleep()
    {
        cout << "Male sleeping" << endl;
    }

    // for protected n private mode inheritance
    int getHeight()
    {
        // cannot inherit private members from parent. It'll throw error
        return this->heigth;
    }
};

int main()
{
    Male object1;

    cout << "Inherited height in the child is ";
    // cout << object1.heigth << endl;
    // cout << object1.getHeight() << endl;
    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    cout << "public Color from child is " << object1.color << endl;
    // object1.sleep();
    // object1.setWeight(70);
    // cout << object1.weight << endl;
}