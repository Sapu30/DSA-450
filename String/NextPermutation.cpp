#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int i = N-2, j = N-1;
        while(i > 0 && arr[i]>arr[i+1]){
            i--;
        }

        while(i > 0 && arr[i] > arr[j]){
           j--;
         }

        if(i == j){
            reverse(arr.begin(),arr.end());
                return arr;
         }

        swap(arr[i],arr[j]);
        reverse(arr.begin()+i+1,arr.end());
         return arr;
    }
        
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  