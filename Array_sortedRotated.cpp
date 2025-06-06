#include <iostream>
#include <vector>
#include <climits>
using namespace std;
//Leetcode 1752. Check if Array Is Sorted and Rotated
/*Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {3, 4, 5, 1, 2}; // Example input
    bool result = obj.check(nums);
    cout << (result ? "true" : "false") << endl; // Output: true
    return 0;
}