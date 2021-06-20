#include<bits/stdc++.h>
using namespace std;

//Median of a row - wise sorted array

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // store result in a single container(array)
    int k=r*c;        //total no. of elements
        int arr[k];   //array of k size to store k elements
        int x=0;            
        for(int i=0;i<r;i++){            //storing elements in an array
            for(int j=0;j<c;j++){
            arr[x]=matrix[i][j];
            x++;                         //increasing the index value one by one
        }}
        sort(arr,arr+k);               //sort array
        int mid ;                      //find mid index value and return
        mid = (k)/2;
        return arr[mid];
}

};

// Driver Code Starts.

int main()
{
    int r, c;
    cout<<"Enter no. of rows & cols:";
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int>(c));
    cout<<"\nEnter elements of the matrix: ";
    for(int i = 0; i < r; ++i)
        for(int j = 0;j < c; ++j)
           cin>>matrix[i][j];

    Solution obj;
    cout<<"\nMedian of row wise sorted matrix is: ";
    cout<<obj.median(matrix, r, c)<<endl;        

    return 0;
} 