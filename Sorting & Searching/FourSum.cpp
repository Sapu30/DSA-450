#include <bits/stdc++.h>
using namespace std;

//Time Complexity : O(N^3)
class Solution{
    public:
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n = arr.size();
        // SET: To Keep Unique Elements Only
        set<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                // Two Pointers Approach Just Like Pair With A Given Sum
                int x = arr[i] + arr[j];
                int y = j+1, z = n-1;
                int rem = k - x;
                while(y<z){
                    int ui = arr[y] + arr[z];
                    if(ui == rem){
                        ans.insert({arr[i], arr[j], arr[y], arr[z]});
                         y++;
                        z--;
                    }
                    else if(ui < rem){
                        y++;
                    }
                    else{
                        z--;
                    }
                }
            }
        }
        vector<vector<int>> answer;
        for(auto x: ans){
            answer.push_back(x);
        }
        return answer;
    }
};

// driven code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  