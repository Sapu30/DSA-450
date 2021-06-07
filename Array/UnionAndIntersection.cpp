#include<bits/stdc++.h>
using namespace std;

//Union using set  (Time complexity: m + n)
void Union(int a[], int b[], int m, int n)
{
    set<int> un;                //set is used to store data in sorted form 
                                //also does not allowed duplicate data
    for(int i = 0; i < n; i++)
       un.insert(a[i]);
    for(int i = 0; i < m; i++)
       un.insert(b[i]);
    for(int i : un)
       cout<<i<<" ";
}

//Intersetion using set   (Time complexity: m + n)
void intersection(int a[], int b[], int m, int n)
{
    set<int> in;
    int i, j;
    i = j = 0;
    while(i < n && j < m)
    {
        if(a[i] < b[j])
          i++;
        else if(a[i] > b[j])
            j++;
        else
        {
            in.insert(a[i]);
            i++;
            j++;
        }  
    }
    for(int i : in)
       cout<<i<<" ";
}

//Driver code
int main()
{
    int a[] = {2,4,6,8};
    int b[] = {0,1,2,5,6,9};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    cout<<"Union is: ";
    Union(a,b,m,n);
    cout<<"\n";
    cout<<"Intersection is: ";
    intersection(a,b,m,n);
    cout<<endl;
    return 0;
    
}