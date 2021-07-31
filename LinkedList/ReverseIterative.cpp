#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

//Reverse Linked List : Iterative Method
//Time complexity :  O(N),  Space Complexity : O(1)
// Link list Node
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // return head of reversed list
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(current != NULL)
        {
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }

        head = prev;
        return prev;
    }
    
};
    

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

//driven code
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}