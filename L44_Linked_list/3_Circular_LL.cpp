#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        if (this->next == NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertAfterNode(Node *&tail, int element, int d)
{
    // when empty list and tail=NULL
    if (tail == NULL)
    {
        Node *nodeToBeInserted = new Node(d);
        tail = nodeToBeInserted;
        nodeToBeInserted->next = nodeToBeInserted;
    }
    // non-empty list
    else
    {
        // when only one node is present
        Node *current = tail;
        while (current->data != element)
        {
            current = current->next;
        }
        // now current is pointing to the element

        // creating the required node
        Node *nodeToBeInserted = new Node(d);

        // insertion started
        nodeToBeInserted->next = current->next;
        current->next = nodeToBeInserted;
        // insertion done
    }
}

void deleteThisNode(Node *&tail, int element)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List empty !" << endl;
    }
    else
    {
        // non-empty
        Node *prev = tail;
        Node *current = prev->next;

        while (current->data != element)
        {
            prev = current;
            current = current->next;
        }
        // now current is pointing to the element

        // single element case
        if (current == prev)
        {
            tail = NULL;
        }

        // deleting current node
        prev->next = current->next;
        if (tail == current)
        {
            tail = prev;
        }

        current->next = NULL;
        delete current;
    }
}
void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    // storing tail pointer's location
    Node *temp = tail;

    // using do while loop as atleast once the tail will be printed and then keep printing it untill it encounter itself
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{
    Node *tail = NULL;

    insertAfterNode(tail, 5, 3);
    print(tail);
    insertAfterNode(tail, 3, 6);
    print(tail);
    insertAfterNode(tail, 6, 9);
    print(tail);
    insertAfterNode(tail, 6, 7);
    print(tail);
    insertAfterNode(tail, 9, 1);
    print(tail);

    deleteThisNode(tail, 3);
    print(tail);
    deleteThisNode(tail, 9);
    print(tail);
    deleteThisNode(tail, 6);
    print(tail);
    deleteThisNode(tail, 7);
    print(tail);
    deleteThisNode(tail, 1);
    print(tail);
}