#include<bits/stdc++.h>
using namespace std;

/*void reverseArr(int arr[], int start, int end)
{
   cout<<"Reversed Array: ";
   for(int i = end ; i >= start; i--)
   {
       cout<<arr[i]<<" ";
   }

   cout<<endl;
}
*/
//Using Recursion (Time complexity  =  O(n))
void reverseArr(int arr[], int start, int end)
{
    if(start >= end)
    return;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
 
    reverseArr(arr, start + 1, end - 1);

}

void printArr(int arr[], int n)
{
   for(int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }

   cout<<endl;
}

int main()
{
    int arr[] ={1, 2, 3, 4, 5};

    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout<<"Given Array: ";
    printArr(arr, n);

   
    reverseArr(arr,0,n-1);
    cout<<"Reversed Array: ";
    printArr(arr, n);

    return 0;
}


