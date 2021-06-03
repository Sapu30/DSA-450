#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,0,1,0,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0, j = 0, k = n - 1;  //here i take care of that all elements before i will be 0
    while(j <= k)   //here k take care of that all elemnts after k will be 2
    {                            //j take care of 1
       if(arr[j] == 0)
       {
         swap(arr[i], arr[j]);
         //arr[i] += arr[j] - (arr[j] = arr[i]);         
         i++;
         j++;
       }
       else if (arr[j] == 1)
       {
           j++;
       }
       else
       {
           swap(arr[j], arr[k]);
           //arr[j] += arr[k] - (arr[k] = arr[j]);
           k--;
       }

    }     

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  

    return 0;                      



}