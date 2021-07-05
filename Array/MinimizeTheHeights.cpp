#include<bits/stdc++.h>
using namespace std;

//Approach : Sliding Window technique  
//Time Complexity : O(n)
void getMinDiff(int arr[], int n, int k)
{
    //vector is a sequence container class, implement dynamic array
        vector<pair<int,int>> v;     //index : value of array
        vector<int> vis(n);         //Visited array
        
        //First of all make all pair
        for(int i=0;i<n;i++)
        {
            //If -ve integer allowed then this if condition will eliminate
            if(arr[i]-k>=0)
            {
                v.push_back({arr[i]-k,i});
            }
            v.push_back({arr[i]+k,i}); 
        }
        
        //then sort them acoording to value not index
        sort(v.begin(),v.end());

        //take 3 pointer and check conditions
        int ele=0,left=0,right=0;
        
        while(ele<n && right<v.size())
        {
            if(vis[v[right].second]==0)
                ele++;
            
            vis[v[right].second]++;
            right++;
            //element n hote hi break...creating a window
        }
        
        int ans=v[right-1].first-v[left].first;
        
        while(right<v.size())
        {
            if(vis[v[left].second]==1)
                ele--;
            
            vis[v[left].second]--;
            left++;
            
            while(ele<n && right<v.size())
            {
                if(vis[v[right].second]==0)
                    ele++;

                vis[v[right].second]++;
                right++;
            }
            
            if(ele==n)
            {
                ans=min(ans,v[right-1].first-v[left].first);
            }else
            {
                break;
            }
        }
        cout<<ans<<endl;
}

//Driven Code 
int main()
{                                   
    int k, n, arr[10];
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Enter value of k: ";
    cin>>k;

    getMinDiff(arr,n,k);

    return 0;

}