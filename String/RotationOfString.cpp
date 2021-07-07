#include<bits/stdc++.h>
using namespace std;

//check weather a string is roation of another or not
void chkRotation(string s1, string s2)
{
    if(s1.length() == s2.length())
    {
        string temp = s1 + s1 ;
        //check if position is -1 or not
        if(temp.find(s2) != string :: npos){        //string :: npos a const static member 
            cout<<"Yes";                            //means untill the end of the string
        }
        else{
            cout<<"No";
        }
    }
    else{
        cout<<"No";
    }

}
int main()
{
    string s1, s2;
    cout<<"Enter two string s1 & s2: ";
    cin>>s1;
    cin>>s2;
 
    chkRotation(s1, s2);  

    return 0;

}


/* explanantion:
   s1 = "ABACD"
   s2 = "CDABA"
   s1+s1 = "ABACDABACD"
   is "CDABA" is a substring of s1??....yes hence s2 is a rotaion 
   of s1;

*/
