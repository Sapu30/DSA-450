#include <bits/stdc++.h>
#include<string.h>
using namespace std;

//Time Complexity O(|s1|*|s2|)
class Solution {
  public:
    int editDistance(string s1, string s2)
    {
        int m = s1.length();
        int n = s2.length();
        //create table to store results of subproblems dp[][]
        int dp[m + 1][n + 1];
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                //Boundary Case
                if(i == 0)                  //s1 = " " & s2 = "abc"  -> step == s2.length()
                   dp[i][j] = j;

                else if(j == 0)             //s1 = "abc" & s1 = " "  -> step == s1.length()
                    dp[i][j] = i;

                else if(s1[i - 1] == s2[j - 1])     //if last character are same, ignore it 
                    dp[i][j] = dp[i - 1][j - 1];    //and recur for remaining string

                else                             //if last character is different, consider 
                {                                    //all possiblities and find minimum
                    dp[i][j] = 1 + min({dp[i][j-1],   //insert
                                   dp[i-1][j],        //remove
                                   dp[i-1][j-1]});    //replace
                }
            }
        }

    return dp[m][n];
    }
};

//Driver Code
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;
        int ans = ob.editDistance(s1, s2);
        cout << ans << "\n";
    }
    return 0;
}