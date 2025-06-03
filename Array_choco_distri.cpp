#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

class Array_choco_distri {
    // This class is used to distribute chocolates among students such that the difference between the maximum and minimum chocolates given to students is minimized.
	public:
		int distribution(vector<int> &arr, int m){
			int n=arr.size();

			sort(arr.begin(), arr.end());  // Use efficient STL sort

			int minDiff=INT_MAX;
			for(int i=0;i<=n-m;i++){
				if(arr[i+m-1]-arr[i]<minDiff){
					minDiff = arr[i+m-1]-arr[i];
				}
				
			}
            return minDiff;
		}
};

int main() {
    Array_choco_distri obj;
    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 3; // Number of students
    int result = obj.distribution(arr, m);
    cout << "Minimum difference is: " << result << endl;
    return 0;
}

