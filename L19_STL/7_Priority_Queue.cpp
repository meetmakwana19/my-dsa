#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Priority queue is the queue whose first element is always greatest which will be popped
    // Default Priority queue is max heap

    // max heap
    priority_queue<int> maxi;

    // min heap of name `mini`
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(0);
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);

    int s = maxi.size();
    cout << "Size is " << s << endl;
    // for priority_queue printing
    for (int i = 0; i < s; i++) // dont use i < maxi.size() this here to calculate size as it'll change after every pop and will affect the result
    {
        cout << maxi.top() << " "; // prints only the elements from top
        maxi.pop();                // then pops it so that it doesn't repeat
    }
    cout << endl;

    // emptied it by doing popping in for loop so following will return true
    cout << "Empty ? " << maxi.empty();
}