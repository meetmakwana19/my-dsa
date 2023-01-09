https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?leftPanelTab=0

```
#include <bits/stdc++.h>
#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

       class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
// approach 2 to improve TC
Node * getMiddle(Node* head){
    //edge case of empty or one element list
    if(head == NULL || head->next == NULL){
        return head;
    }
    //2 element list
    if(head->next->next == NULL){
        return head->next;
    }

    //2 pointers where one covers n length and other n/2 length n same time
    Node *fast = head->next;
    Node *slow = head;

    while(fast != NULL){
        //fast is taking 2 steps
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next; //2nd step
        }
        //slow taking 1 step
        slow = slow->next;
    }
    return slow;
}

// approach 1
int getLength(Node *head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}
Node *findMiddle(Node *head) {
    //approach 2 ;
    getMiddle(head);

    // approach 1 : of O(n) T.C.
//     int length = getLength(head);
    /*
    int ans = length/2 ;

    //to return the middle element
    Node *temp = head;
    int count = 0;
    while ( count < ans ){
        temp = temp->next;
        count++;
    }
    return temp;
    */
}
```
