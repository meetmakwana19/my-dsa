// // https://www.codingninjas.com/codestudio/problems/reverse-linked-list_920513?leftPanelTab=1

// #include <bits/stdc++.h>
// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
// 	        int data;
// 	        Node *next;
// 	        Node(int data)
// 	        {
// 		        this->data = data;
// 		        this->next = NULL;
// 	        }
//         };

// *****************************************************************/
// // approach 3:
// Node * reverse2(Node *&head){

//     //base case : When no or one element
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

//     Node* chotaHead = reverse2(head->next);

//     //attaching chotilist to the head element
//     head->next->next = head;
//     head->next = NULL; //removing the forward connection

//     return chotaHead;
// }

// // approach 2 : recursion
// /*void reverse(Node *&head, Node * curr, Node *prev){

//     //base case : stop when the curr reaches the end
//     if(curr == NULL){
//         //curr becoming NULL means prev is pointing to the last element
//         //so make prev the head
//         head = prev;
//         return;
//     }

// //     have to keep moving curr, prev ahead
//     Node *forward = curr->next;
//     reverse(head, forward, curr);
//     curr->next = prev; // attaching curr to it's prev for reversal
// }*/

// Node* reverseLinkedList(Node *head)
// {

//     return reverse2(head);
//     /*Node *prev = NULL;
//     Node *curr = head;
//     reverse(head, curr, prev);
//     return head;*/

//     /*
// //     empty list or single element case
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

// //     using 2 pointers
//     Node *prev = NULL;
//     Node *curr = head;
//     Node *forward = NULL;

// //     iterative approach using 2 pointers curr and prev
// //     move curr till end
//     while(curr != NULL){
//         forward = curr->next; //attaching forward to the next element
//         curr->next = prev; //attaching curr to it's prev for reversal
// //         progressing the pointers ahead
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
//     */
// }
