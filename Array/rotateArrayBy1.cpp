#include<bits/stdc++.h>
using namespace std;

//Time complexity : O(1)
void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }

}

//Driver code
int main()
{
    int arr[] = {2,4,8,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given Array :";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"After Rotation:";
    rotate(arr,n);
    return 0;
}