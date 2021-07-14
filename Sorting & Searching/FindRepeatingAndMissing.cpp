#include <bits/stdc++.h>
using namespace std;

//Time Complexity : O(N)
class Solution{
public:
    vector<int> findTwoElement(int *arr, int n) {
        // code here
        int a[n]={0};
        for(int i=0; i<n; i++){
            a[arr[i]-1]++;
        }
        
        int r=0;
        int m=0;
        
        for(int i=0; i<n; i++){
            if(a[i]==0){
                m=i+1;
            }
            if(a[i]==2){
                r=i+1;
            }
        }
        
        vector<int> b;
        
         b.push_back(r);
         b.push_back(m);
        
        return b;
        
    }
};

//Driver Code

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}