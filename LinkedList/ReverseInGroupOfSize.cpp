#include<bits/stdc++.h>
using namespace std;

//Time Complexity : O(N)
//Auxilliary Space : O(1)
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

//Function to print linked list
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        int count = 0;
        node *prev = NULL;
        node *curr = head;
        node *next = NULL;
        while(curr != NULL && count < k)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next != NULL)  
           head -> next = reverse(next, k);
           
        return prev;
    }
};


//Driven code
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

/*

Input:
LinkedList: 1->2->3->4->5
K = 3

Output: 3 2 1 5 4 

Explanation: 
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3->2->1->5->4.
*/

