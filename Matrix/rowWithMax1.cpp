#include <bits/stdc++.h>
using namespace std;

//Row with max 1s
//Time Complexity: O(N+M)
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int index = -1;
	    int i = 0, j = m - 1;
	    
	    while(i < n && j >=0)        //start check from right side 
	    {
	        if(arr[i][j] == 1)       //if element = 1 move left
	        {
	            index = i;
	            j--;
	        }
	        if(arr[i][j] == 0)        //if element = 0 jump to next row
               {
	            i++;
	        }
	    }
	    
	    return index;
	}

};

// { Driver Code Starts.
int main() 
{
    int n, m;
    cout<<"Enter rows & cols: ";
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        cout<<"\nEnter elements: ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        cout<<"Row having Max no. 1s: ";
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";

    return 0;
}


/*
    N = 4 , M = 4
    Arr[][] = {{0, 1, 1, 1},
               {0, 0, 1, 1},
               {1, 1, 1, 1},
               {0, 0, 0, 0}}

    Output: 2

*/