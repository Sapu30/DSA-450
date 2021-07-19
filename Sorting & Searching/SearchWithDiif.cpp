//Searching in an array where adjacent differ by at most k
#include<bits/stdc++.h>
using namespace std;


int search(int a[], int n, int k, int d)
{
    int i = 0;
    while(i < n)
    {
        if(a[i] == k)
           return i;

        i = i + max(1, abs(a[i]-k)/d);
    }

    cout << "number is not present!";
    return -1;
}

int main(){
    int a[] = {10,20,30,50,50,60};
    int k = 50;
    int diff = 10;

    int n = sizeof(a)/sizeof(a[0]);

    cout<<"Element "<<k<<" is present at index : "<<search(a, n, k, diff);

    return 0;
}
