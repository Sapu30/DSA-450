#include <bits/stdc++.h>
using namespace std;

//Time Complexity : O(1)
class Solution{
  public:
    int middle(int A, int B, int C){
    //code here
    /*  
      vector<int> res;          //using STL
      res.push_back(A);
      res.push_back(B);
      res.push_back(C);
       
      sort(res.begin(), res.end());
       
      return res[1];
    */
    int res;
    if(A > B && A > C)
    {
        if(B > C)
        {
            res = B;
        }
        else
            res = C;
    }
    else if(B > A && B >C)
    {
        if(A > C)
        {
            res = A;
        }
        else 
            res = C;
    }
    else{
        if(A > B)
        {
            res = A;
        }
        else
            res = B;
    }
    
    return res;
    }
};

// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  