#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Array_search_in_rotated {
    // This class is used to search for a target value in a rotated sorted array.
    // The array is initially sorted but then rotated at some pivot.
    // The search function returns the index of the target if found, otherwise -1.
    public:
    int search(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[start]<=nums[mid]){
              if(nums[start]<=target && target<=nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }

            }
            else{
                if(nums[mid]<=target && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
           
        }
         return -1;
    }  
 };

 int main() {
     Array_search_in_rotated obj;
     vector<int> nums = {4,5,6,7,0,1,2}; // Example input
     int target = 0; // Target value to search for
     int result = obj.search(nums, target);
     cout << "Index of target: " << result << endl; // Output the index of the target
     return 0;
 }