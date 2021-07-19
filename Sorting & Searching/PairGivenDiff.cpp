//Find pair of given difference

#include<bits/stdc++.h>
using namespace std; 

bool findPair(int arr[], int size, int n);
//Time Complexity : O(L*LOG(L))   //where L is the size of array

//driven code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}

//find pair function
bool findPair(int arr[], int size, int n){
    sort(arr, arr + size);
    int i = 0, j = 1;
    while(i < size && j < size){
        if((i != j) && (arr[j] - arr[i] == n)){
            return 1;
            i++;
            j++;
        }
        else if(arr[j] - arr[i] < n)
        {
            j++;
        }
        else{
            i++;
        }
    }
    
    return 0;
    
}

//OR 

// bool findPair(int arr[], int size, int n)
// {
//     sort(arr,arr+size);
//     bool flag;
//     for(int i=size-1;i>=0;i--)
//     {
//         int x = arr[i] - n;
//         flag = binary_search(arr,arr+size,x);
//         if(flag == true)
//            return flag;
//     }
// return flag;

// }