#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

//Maximum Sum of Non - Adjacent elements
//Time Complexity : O(N)
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int dp[n];
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        for(int i = 2 ; i < n ;i++){
            dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
        }
         return dp[n-1];
    }
};

// driven code
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}