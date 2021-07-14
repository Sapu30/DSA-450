// Search an element in sorted and rotated (array using single pass of Binary Search)
#include<bits/stdc++.h>
using namespace std;

//Time Complexity : O(log n)
int search(int nums[], int n, int target) 
{
    int res, mid, start = 0, end = n - 1;    
    while(start <= end)
    {
        mid = (start+end)/2;
        if(target == nums[mid])    //Target == mid_value
            return mid;

        else if(nums[start] <= nums[mid])     //Left half is sorted
        {
            if(target >= nums[start] && target <= nums[mid])  //key lies in left sorted half
            {   
                end = mid - 1;  
            }
            else                                    //key lies in right unsorted half
            {
                start = mid + 1;
            }
        }
            
        else                                       //right half is sorted
        {
            if(target >= nums[mid] && target <= nums[end])   //key lies in right sorted half
            {
                start = mid + 1;
            }
            else                                        //key lies in left unsorted half
            {
                end = mid - 1;}
            }
        }
        
        return -1;
}

//driven code
int main()
{
	int nums[] = { 4, 5, 6, 7, 0, 1, 2 };
	int n = sizeof(nums) / sizeof(nums[0]);
	int target = 0;
	int i = search(nums,n,target);

	if (i != -1)
		cout << "Index: " << i << endl;
	else
		cout << "Target not found";
}

