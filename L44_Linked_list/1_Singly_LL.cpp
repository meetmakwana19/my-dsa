#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // a pointer 'next' of 'Node' type

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // free memory
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free with data " << value << endl;
    }
};

// taking reference by using address operator `&` to use the same head
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp; // changing head
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp; // changing tail
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int d)
{
    if (pos == 1)
    {
        //     Node *nodeToInsert = new Node(d);
        //     nodeToInsert->next = head;
        //     head = nodeToInsert;

        // or
        insertAtHead(head, d);
        return;
    }

    Node *temp = head; // a temp node for traversal starting from head
    int count = 1;     // starting position 1 of temp

    // for nth position, traverse till n-1
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    // check if the temp reached the last node to insert at tail
    // this is imp to update the tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // node to insert
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteAtPosition(Node *&tail, Node *&head, int pos)
{
    // deleting head
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;

        // free memory using destruuctor as heap memory is used
        temp->next = NULL; // point it to null before calling the destructor
        delete temp;
    }
    else
    {
        Node *current = head; // starting current from head
        Node *prev = NULL;
        int count = 1;

        while (count <= pos - 1)
        {
            prev = current;
            current = current->next;
            count++;
        }

        prev->next = current->next;
        // handling the tail
        if (current->next == NULL)
        {
            // this is last tail node
            tail = prev;
        }
        current->next = NULL;
        delete current;
    }
}

void deleteNode(Node *&tail, Node *&head, int d)
{
    Node *current = head;
    Node *prev = NULL;

    // handling head deletion
    if (head->data == d)
    {
        head = current->next;
        current->next = NULL;
        delete current;
        return;
    }

    while (current->data != d)
    {
        // cout << current->data << endl;
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    // handling tail
    if (current->next == NULL)
    {
        tail = prev;
    }

    current->next = NULL;
    delete current;
}

void print(Node *&head)
{
    Node *temp = head; // pointing a temp to the head
    // iterate temp till the last node
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // creating a node in the heap memory using pointer
    Node *node1 = new Node(5);

    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to the created node
    Node *head = node1;
    // tail pointed at the created node
    Node *tail = node1;

    cout << "Linked lists insertion at head/start :" << endl;
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);
    cout << "Insertion at tail/end :" << endl;
    insertAtTail(tail, 30);
    print(head);
    insertAtTail(tail, 40);
    print(head);
    cout << "Insertion at position 3 :" << endl;
    insertAtPosition(tail, head, 3, 50);
    print(head);
    cout << "Insertion at position 1 :" << endl;
    insertAtPosition(tail, head, 1, 60);
    print(head);
    cout << "Insertion at position 8 :" << endl;
    insertAtPosition(tail, head, 8, 70);
    print(head);
    cout << "Deleting from position 3 :" << endl;
    deleteAtPosition(tail, head, 3);
    print(head);
    cout << "Deleting from head position 1 :" << endl;
    deleteAtPosition(tail, head, 1);
    print(head);
    cout << "Deleting from tail position 6 :" << endl;
    deleteAtPosition(tail, head, 6);
    print(head);
    cout << "Deleting from tail position 5 :" << endl;
    deleteAtPosition(tail, head, 5);
    print(head);
    cout << "Deleting 5 :" << endl;
    deleteNode(tail, head, 5);
    print(head);
    cout << "Deleting head 15 :" << endl;
    deleteNode(tail, head, 15);
    print(head);
    cout << "Deleting tail 30 :" << endl;
    deleteNode(tail, head, 30);
    print(head);
    // cout << "Deleting last element 50 :" << endl;
    // deleteNode(tail, head, 50);
    // print(head);
    cout << "Head is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;
}