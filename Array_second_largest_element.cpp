#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int large = INT_MIN, secondLarge=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>large){
                secondLarge=large;
                large=nums[i];
            }
            else if(nums[i]>secondLarge && nums[i]<large){
                secondLarge = nums[i];
            }
        }
        return secondLarge;
      
    }
};
int main() {
    Solution obj;
    vector<int> nums = {3, 1, 4, 4, 5, 2}; // Example input
    int result = obj.secondLargestElement(nums);
    cout << "Second largest element: " << result << endl; // Output the second largest element
    return 0;
}