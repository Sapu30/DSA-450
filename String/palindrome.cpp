#include<bits/stdc++.h>
using namespace std;

//Check if string is palindrome or not
class Solution{
public:	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int l = 0;
        int h = S.length() - 1;
        while (h > l)
        {
            if(S[l++] != S[h--])
                return 0;           //S is not a palindrome
        }
        return 1;                 //S is a palindrome
    }

};

int main() 
{
   	int t;
    cout<<"enter t:";
   	cin >> t;
   	while(t--)
   	{
   		string s;
        cout<<"enter string: ";
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}