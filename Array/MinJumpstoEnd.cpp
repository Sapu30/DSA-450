#include<bits/stdc++.h>
using namespace std;

//Time Complexity : O(n)
int minJump(int arr[], int n)
{
    int jump = 0, farthest = 0, curr = 0;
    for(int i = 0; i < n - 1; i++)
    {
        farthest = max(farthest, i+arr[i]);
        if(farthest >= n - 1)
           return 1 + jump;
        if(i == farthest)
           return -1;
        if(i == curr)
        {
            jump++;
            curr = farthest;
        }
    }
    return jump;
}

//Driven code
int main()
{
    int arr[] = {1,4, 3, 2, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int val = minJump(arr,n);
    cout<<val;

    return 0;
}

//Logic : 
//whatever the value of element the pointer will jump with that value
//  i.e in the above question 1. jump by 1 -> reach at 4
//                            2. jump by 4 -> reach at 7  (7 is the last element)
//      hence, no. of jumps to reach end = 2