#include<bits/stdc++.h>
using namespace std;


//using Binary search.....time complexity -> O(r*c)
//Only for sorted array
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;     //no. of rows start from 0
	    int j = matrix[0].size()-1;    //element of 1st row and last column 
	    
	    while(i<matrix.size() && j>=0){
	        if(matrix[i][j]==target)        //if the pointed value == target
	            return true;   
	            
	       else if(matrix[i][j]>target)     //if pointed value is greater than target move left
	            j--;
	        
	        else                           //if pointed value is smaller than target move down
	            i++;
	    }
	    
	    return false;          //if element not present return false
    }
        
//driven code
int main()
{
    int r, c, target;
    cout<<"Enter rows & cols: ";
    cin>>r>>c;
    vector<vector<int> > matrix(r);
    cout<<"Enter values: ";
    for(int i = 0; i < r; i++)
    {
        matrix[i].assign(c,0);
        for(int j = 0; j < c; j++)
        {
            cin>>matrix[i][j];
        }
    }
      
    // cout<<endl;  
    // cout<<matrix.size()<<endl;
    // cout<<matrix[0].size() - 1<<endl;

    cout<<"Enter target: ";
    cin>>target;

    if(searchMatrix(matrix, target))
       cout<<"true";
    else
       cout<<"false";
    
    return 0;
}