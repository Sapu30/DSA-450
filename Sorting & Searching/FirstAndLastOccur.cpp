#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );


//Time Complexity : O(log n)
//driven code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    int a = -1, b = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            a = i;
            break;   
        }
    }
    
    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] == x)
        {
            b = i;
            break;
        }
    }
    
    vector<int> result{a,b};
    
    return result;
}

/*
    n=9, x=5
    arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
    Output:  2 5
    Explanation: First occurrence of 5 is at index 2 and last
                occurrence of 5 is at index 5. 

*/