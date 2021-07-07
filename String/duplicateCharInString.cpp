#include<bits/stdc++.h>
using namespace std;

//Count duplicate Character in a string
//       it also counts spaces and it is case sensitive

//Time complexity : O(N log N)
void printCount(string str)
{
    map<char, int> count;        //map use to store string characters
    for(int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    //count if a character appears more than 1 time
    for(auto it : count)
    {
        if(it.second > 1)
           cout<<it.first<<" "<<"count = "<<it.second<<"\n";
    }
}

//driver code 
int main()
{
    string str = "Hello People";
    printCount(str);
    return 0;
}