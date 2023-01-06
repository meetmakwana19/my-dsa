#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL) // next == NULL is already handled in the delete function
        {
            delete next;
            next = NULL;
        }
        cout << "Freeing memory for " << val << endl;
    }
};

void insertAtHead(Node *&tail, Node *&head, int d)
{
    Node *temp = new Node(d);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        tail = temp;
        head = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPos(Node *&tail, Node *&head, int pos, int d)
{
    // handling pos 1
    if (pos == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }
    Node *temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *nodeToInsert = new Node(d);

    // handling last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteAtPositon(Node *&tail, Node *&head, int pos)
{
    // deleting head
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *prev = NULL;
        int count = 1;
        while (count <= pos - 1) // getting current pointer on the position
        {
            prev = current;
            current = current->next;
            count++;
        }
        if (current->next == NULL)
        {
            tail = prev;
        }
        current->prev = NULL;
        prev->next = current->next;
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
    else
    {
        while (current->data != d)
        {
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        // handling tail
        if (current->next == NULL)
        {
            tail = prev;
            current->prev == NULL;
            delete current;
            return;
        }
        current->prev = NULL;
        current->next->prev = prev;
        current->next = NULL;
        delete current;
    }
}
void print(Node *&head)
{
    Node *temp = head; // temp pointer

    // untill last NULL pointer is encountered
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}
int main()
{
    // Node *node1 = new Node(5);
    // Node *head = node1;
    // Node *tail = node1;

    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << "Lenght is " << getLength(head) << endl;

    insertAtHead(tail, head, 10);
    print(head);
    cout << "Lenght is " << getLength(head) << endl;
    cout << "Head = " << head->data << endl;

    insertAtHead(tail, head, 15);
    print(head);
    cout << "Lenght is " << getLength(head) << endl;
    cout << "Head = " << head->data << endl;

    insertAtTail(tail, head, 20);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;

    cout << "\nInserting at pos 3 :" << endl;
    insertAtPos(tail, head, 3, 8);
    print(head);
    cout << "\nInserting at pos 1 :" << endl;
    insertAtPos(tail, head, 1, 9);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;
    cout << "\nInserting at pos 6 :" << endl;
    insertAtPos(tail, head, 6, 30);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;

    cout << "\n Deleting from position 3" << endl;
    deleteAtPositon(tail, head, 3);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;
    cout << "\n Deleting from position 1" << endl;
    deleteAtPositon(tail, head, 1);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;
    cout << "\n Deleting from last position 4" << endl;
    deleteAtPositon(tail, head, 4);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;

    cout << "\nDeleting mid 8" << endl;
    deleteNode(tail, head, 8);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;

    cout << "\nDeleting tail 20" << endl;
    deleteNode(tail, head, 20);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;

    // cout << "\nDeleting last 15" << endl;
    // deleteNode(tail, head, 15);
    // print(head);
    // cout << "Head = " << head->data << endl;
    // cout << "Tail = " << tail->data << endl;
}