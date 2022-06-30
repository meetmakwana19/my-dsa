#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // LIFO Concept

    // Creating a tack of string type names s
    stack<string> s;

    s.push("I");
    s.push("am");
    s.push("Ironman");

    cout << "Top element : " << s.top() << endl;

    s.pop();
    s.pop();
    // s.pop();
    cout << "Top element : " << s.top() << endl;

    cout << "Empty or not ? " << s.empty() << endl;
}