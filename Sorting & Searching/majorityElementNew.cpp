//Not in the sheet
#include<bits/stdc++.h>
using namespace std;

//Majority Element : N/3 repeated number in an array with O(1) space
////Time Complexity : O(N)
//Using (Boyer - Moore majority vote algorithm)
class Solution {
public:
    int majorityElement(int a[], int n) {
  
        int count1 = 0;        
        int count2 = 0;
        
        int first = INT_MAX;        
        int second = INT_MAX;
		
        for(int i=0;i<n;i++)
        {
            if(first == a[i])
                count1++;
            else if(second == a[i])
                count2++;
            else if(count1 == 0){
                count1++;
                first = a[i];   
            }
            else if(count2 == 0){
                count2++;
                second = a[i];
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==first) count1++;
            else if(a[i]==second) count2++;
        }
    
        if(count1>(n/3)) return first;
        if(count2>(n/3)) return second;
        
        return -1;
    }
};
    
        
// Driver Code
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
