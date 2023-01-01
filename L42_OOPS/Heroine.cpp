#include <iostream>
#include <cstring>
using namespace std;

class Heroine
{
    // properties
    // char name[100]; // size 100 bytes
private:
    int health; // size 4 bytes
public:
    char level; // size 1 byte
    char *name; // a pointer name of char type for dynamic allocatin
    static int time;

    // creating a custom Heroine Constructor
    // this will remove the default constructor which was earlier getting used
    // cant remove this simple constructor if writing parameterized constructor too.
    Heroine()
    {
        cout << "Heroine Constructor called" << endl;
        name = new char[100]; // dynamically allocated in heap(heap has more space) using pointer `name`
    }

    // parameterized constructor
    Heroine(int health)
    {
        // health(data member) = health(parameter) // health(data member) gets the value of health(parameter) whose scope is most recent means the parameter's value. This doesnt make sense fo this keyword is used
        cout << "\n`this` pointing to address of current object `kiara` -> " << this << endl;
        // `this` keyword - Address of current object is stored inside it.
        this->health = health; // storing the incoming parameter value of health into the data member health pointed by this->
    }
    Heroine(int health, char level)
    {
        cout << "\nAnother this -> " << this << endl;
        this->health = health;
        this->level = level;
    }

    // COPY constructor
    // without &,  it'll become pass by value which will make it infinite loop as a copy of temp will be made and to make that copy again the copy constructor will be called and so on the loop goes.
    // so better is to pass the reference using & and point both temp and Original object to the same location.
    Heroine(Heroine &temp)
    {
        // for deep copy(next 3 lines)
        char *ch = new char[strlen(temp.name) + 1]; // creating a new array of size(name's length + 1)
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor got called.\n";
        // using dot operator as static allocation is there
        this->health = temp.health;
        this->level = temp.level;
    }

    static int random()
    {
        // cout << this->health << endl; //error on this
        cout << "static function\n";
        return time;
    }

    // destructor(same name as class but with a tilda ~ sign)
    ~Heroine()
    {
        cout << "Destructor called\n";
    }
    void print()
    {
        cout << "{ ";
        cout << this->name << ", "; // this line is only to test the shallow and deep copy.
        cout << this->health << ", ";
        cout << this->level << " }" << endl;
    }

    // getter & setter methods can be used to access the private members
    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }
    // setter can have diff conditions inside for the evaluation of the funtion.
    void setHealth(int h)
    {
        // can have conditions like if the user is authenticated then only let it change the content
        health = h;
    }
    void setLevel(int l)
    {
        level = l;
    }
    void setName(char name[])
    {
        strcpy(this->name, name); // #include <cstring> for this
    }
};

// datatype class_name :: datamember_name = value ;
int Heroine::time = 180;