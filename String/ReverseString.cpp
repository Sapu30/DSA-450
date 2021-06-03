#include<bits/stdc++.h>
using namespace std;

void reverseStr(string s)
{
    int n = s.length();
    for(int i = n - 1; i >= 0; i--)
    {
        cout<<s[i];
    }
}


int main()
{
    string str = "Hello my name is Sapna!";
 
    //reverse(str.begin(),str.end());    //using inbuilt reverse() function
    //cout<<str<<"\n";

    //cout<<"\n";

    cout<<"Reversed String: ";
    reverseStr(str);

    return 0;
}