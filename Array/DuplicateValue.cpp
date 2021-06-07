#include<bits/stdc++.h>
using namespace std;

//Time complexity : O(n)
int duplicateValue(int nums[], int n)
{
    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j < n; j++){
    //         if(arr[i] == arr[j]){
    //             cout<<arr[i];
    //             break;  }}}


    //Or by using Map               
    map<int, int> mp;              //empty map key container
        int ans;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] == 2)
        {
            ans=nums[i];
            break;
           
        }
    }
        return ans;
}

//Driven Code
int main()
{
    int arr[] = {1,3,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int val = duplicateValue(arr,n);
    cout<<val;
    return 0;
}
