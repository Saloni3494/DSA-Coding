#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Function to find the ceiling of x using
   binary search */
int ceilSearch(vector<int>& arr, int x) {
    int lo = 0, hi = arr.size() - 1, res = -1;
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
  
        if (arr[mid] < x)
            lo = mid + 1;      
        
        else { 
            res = mid;   
            hi = mid - 1;
        }
    }
    return res;  
}

int main() {
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int x = 3;
    int index = ceilSearch(arr, x);
    
    if (index == -1) 
        cout << "Ceiling of " << x << " doesn't exist in array";
    else
        cout << "Ceiling of " << x << " is " << arr[index];

    return 0;
}