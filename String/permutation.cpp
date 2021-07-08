#include <bits/stdc++.h>
using namespace std;
 
// Function to print permutations of string....(print duplicate permutation) 
// This function takes three parameters:
//             1. String
//             2. Starting index of the string
//             3. Ending index of the string.

//Time complexity : O(n*n!)
void permute(string a, int l, int r)
{
    if (l == r)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r);
        
            //backtrack
            swap(a[l], a[i]);
        }
    }
}

//To print distinct permutation
void distinctPermute(string str)
{
    // Sort the string in lexicographically
    // ascending order
    sort(str.begin(), str.end());
 
    // Keep printing next permutation while there
    // is next permutation
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}
 
// Driver Code
int main()
{
    string str = "AAC";
    int n = str.size();
    permute(str, 0, n-1);
    cout<<"\n";
    distinctPermute(str);
    return 0;
}
 