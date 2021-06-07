#include<bits/stdc++.h>
using namespace std;

//                                 Kadane's Algo 
//find sum of contiguous subarray within a 1-dimension array of no. taht has largest sum

//Time complexity : O(n)
void maxSubarraySum(int arr[], int n)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    int start = 0, end = 0, s = 0;

    for(int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
        if(max_ending_here < 0)
        {
           max_ending_here = 0;
           s = i + 1;
        }
        if(max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
    }

    cout<<"Maximum contiguous sum is: "<<max_so_far;
    cout<<"\nStarting Index: "<<start;   //from where actual addition start
    cout<<"\nEnding Index: "<<end;       //where addition ends
}
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    maxSubarraySum(arr, n);
   
    return 0;

}