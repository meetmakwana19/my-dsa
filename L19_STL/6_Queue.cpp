#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // FIFO Concept

    // Creating a queue
    queue<string> q;

    q.push("I");
    q.push("am");
    q.push("Ironman");

    cout << "First element : " << q.front() << endl;
    q.pop();
    cout << "First element : " << q.front() << endl;
    q.pop();
    cout << "First element : " << q.front() << endl;
}