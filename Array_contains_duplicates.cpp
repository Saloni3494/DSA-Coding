#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;
class Array_contains_duplicates {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen; // Step 1
        for(int num : nums) {    // Step 2
            if(seen.count(num))  // Step 3
                return true;     // Step 4
            seen.insert(num);    // Step 5
        }
        return false;            // Step 6
    }
};
int main() {
    Array_contains_duplicates obj;
    vector<int> nums = {1, 2, 3, 4, 5, 1}; // Example input
    bool result = obj.containsDuplicate(nums);
    cout << "Contains duplicate: " << result << endl;
    return 0;
}
