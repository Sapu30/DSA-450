#include<bits/stdc++.h>
using namespace std;

//Time Complexity : O(N)
//Using Boyer - Moore majority vote algorithm

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        int count = 1;
        int max_index = 0;
        for(int i = 1; i < n; i++)
        {
            if(a[i] != a[max_index])
                count--;
            else
                count++;
                
            if(count == 0)
            {
                max_index = i;
                count = 1;
            }
        }
        
        count = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == a[max_index])
               count++;
        }
        
        return (count > n/2) ? a[max_index] : -1;
            
    }
};

// Driver Code
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
