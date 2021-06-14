#include<bits/stdc++.h>
using namespace std;

class solution
{
   public:

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
{
    vector<int>vec;            //vector to store result in a single container(array)
    int top = 0, down = r - 1, left = 0,right = c - 1;     //read explanation
    int dir = 0;

    while(left<=right && top<=down)
    {
        if(dir == 0)
        {
            for(int i = left; i <= right; i++)
               vec.push_back(matrix[top][i]);
            top+=1;
        }
        else if(dir == 1)
        {
            for(int i = top; i <= down; i++)
               vec.push_back(matrix[i][right]);
            right-=1;
        }
        else if(dir == 2)
        {
            for(int i = right; i >= left; i--)
                vec.push_back(matrix[down][i]);
            down-=1;
        }
        else if(dir == 3)
        {
            for(int i = down; i >= top; i--)
                vec.push_back(matrix[i][left]);
            left+=1;
        }
        dir = (dir+1)%4;
    }
    return vec;
}
};

int main()
{
    int r, c;
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

    solution ob;
    vector<int> result = ob.spirallyTraverse(matrix, r, c);
    cout<<"Output: ";
    for(int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}


/* Explaination:
   
   r = 4, c = 4
                 Top = 0 & left = 0
   matrix[][] = { {1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 11, 12},
                  {13, 14, 15,16} }   right = c - 1
                Down = r - 1

dir = 0  :  left -> right
dir = 1  :  top -> down
dir = 2  :  down -> top
dir = 3  :  right -> left


Output: 
1 2 3 4 8 12 11 10 9 5 6 7

*/