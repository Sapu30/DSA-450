#include<bits/stdc++.h>
using namespace std;

//1. using sorting (time complexity : O(nlogk))
//2. using heap (time complexity : O(nlogk)) //better then sorting
void kthMin(int arr[], int s, int e, int k)
{
    //kth Minimum element
    priority_queue<int> mxhp;    //inbuilt in STL
    for(int i = s; i < e; i++)
    {
        mxhp.push(arr[i]);
        if(mxhp.size() > k)
        {
           mxhp.pop();
        }
    }
    cout<<mxhp.top()<<endl;
}

void kthMax(int arr[], int s, int e, int k)
{
    //kth Maximum element
    priority_queue<int, vector<int>, greater<int>> minhp;
    for(int i = s; i < e; i++)
    {
        minhp.push(arr[i]);
        if(minhp.size() > k)
        {
           minhp.pop();
        }
    }
    cout<<minhp.top()<<endl;

}

int main()
{
        int n;
        cout<<"No. of elements: ";
        cin>>n;
        int arr[10];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";

        }
        
        int k;
        cout<<"\nKth element: ";
        cin>>k;

        cout<<"Min: ";
        kthMin(arr, 0, n, k);
        cout<<"Max: ";
        kthMax(arr, 0, n, k);
    return 0;
}