#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
class Array_max_subarray {
    public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
         int sum=0;
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
           if(sum>maxi){
               maxi = sum;
           } 
           if (sum<0){
               sum=0;
           }
        }
   
        return maxi;
    }
    
};

int main(){
        vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
        Array_max_subarray obj;
        int result = obj.maxSubArray(arr);
        cout << "Maximum subarray sum is: " << result << endl;
        getch();
        return 0;
    }