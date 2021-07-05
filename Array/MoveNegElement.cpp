#include<bits/stdc++.h>
using namespace std;

//Move all -ve element to left side
int main()
{
    int a[] = {2, -8, -1, 0, 7, -3};
    int n = sizeof(a)/sizeof(a[0]);

    //Using two pointer approach
    int i = 0, j = n - 1;

    //Time Complexity: O(N)
    //Auxiliary Space: O(1)

    while(i<=j)
    {
        if(a[i] < 0 && a[j] < 0)
        {
           i++;
        }
        else if(a[i] >= 0 && a[j] < 0)
        {
            //swap(a[i], a[j]);
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
        else if(a[i] >= 0 && a[j] >= 0)
        {
            j--;
        }
        else
        {
            i++;
            j--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }  

    return 0;
}