#include<bits/stdc++.h>
using namespace std;

//Find min & max element from an array
/*void findMaxMin(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[i+1])
           max = arr[i+1];
        else
           i++;}
    cout<<"max value : "<<max;
    cout<<endl;

    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i+1])
           min = arr[i+1];
        else
           i++;}
    cout<<"min value : "<<min;}
*/

//By comparing in pairs

//Struct is used to return 2 values from minmax
struct Pair{ 
    int min;
    int max;
};
struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;
    
    if(n % 2 == 0)
    {
        if(arr[0] > arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        } 
        else
        {
            minmax.max = arr[1];
            minmax.min = arr[0];
        } 
        i = 2;
    }

    else
    {
        minmax.max = arr[0];
        minmax.min = arr[0];

        i = 1;
    }

    while(i < n-1)
    {
       if(arr[i] > arr[i+1])
       {
           if(arr[i] > minmax.max)
              minmax.max = arr[i];

           if(arr[i+1] < minmax.min)
              minmax.min = arr[i+1];
       }
       else
       {
           if(arr[i+1] > minmax.max)
              minmax.max = arr[i+1];

           if(arr[i] < minmax.min)
              minmax.min = arr[i];
       }

       i += 2;
    }
    return minmax;
}

//Print value 
void printArr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Driven code
int main()
{
    int arr[] = {10, 19, 9, 11, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Given Array : ";
    printArr(arr,n);

    //findMaxMin(arr,n);
    Pair minmax = getMinMax(arr,n);

    cout<<"minimum element:"<<minmax.min<<endl;
    cout<<"maximum element:"<<minmax.max<<endl;
    

    return 0;
}

// O(n)