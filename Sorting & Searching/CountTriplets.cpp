#include <bits/stdc++.h>
using namespace std;

//Count triplets with sum smaller than X 
//Time Complexity : O(N^2)
class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long X)
	{
	    int count = 0;
	    sort(arr, arr + n);
	    for(int i = 0; i < n - 2; i++)
	    {
	        int a = i + 1;
	        int b = n - 1;
	        while(a < b)
	        {
	            int s = arr[i] + arr[a] + arr[b];    //first 2 index and a last index
	            if(s < X)         
	            {
	                count += (b - a); //after sorting if sum of first 2 with last is 
	                a++;              //smaller than X then sum of first 2 with all other 
	            }                     //elements also be small than X
	            else
	                b--;
	        }
	    }
	    
	    return count;
	}
		 

};

// driven code

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long X;
        cin>>n>>X;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout << ob.countTriplets(arr, n, X) ;
	    cout << "\n";
	     
    }
    return 0;
}
