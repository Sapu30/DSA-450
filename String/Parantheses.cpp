#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        //Your code here
        stack<char>s;
        for(auto i : x)
        {
          if(i == '(')
            s.push(')');
        else if(i == '{')
            s.push('}');
        else if(i == '[')
            s.push(']');
        else if( s.empty() || s.top() != i)
            return false;
        else if(s.top() == i)
            s.pop();
            
        }
    return s.empty();
    }
};

//Driver Code

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  