#include <bits/stdc++.h>
using namespace std;

//Time Complexity : O(sqrt(N))
class Solution {
  public:
    int countSquares(int N) {
        // code here
        int count = 0;
        for(int i = 1; i < sqrt(N); i++)
        {
            int res = i*i;
            if(res < N)
            {
                count += 1;
            }
        }
        
        return count;
    }
};

// Driver Code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  


/* 
Input :
N = 9
Output:
2
Explanation:
1 and 4 are the only Perfect Squares
less than 9. So, the Output is 2.

*/