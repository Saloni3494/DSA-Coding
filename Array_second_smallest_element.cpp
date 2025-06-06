#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution{
	public:
		int secondSmallestElement(vector<int>& arr){
			int small=INT_MAX, secondSmall=INT_MAX;
			for(int i=0;i<arr.size();i++){
				if(arr[i]<small){
					secondSmall=small;
					small=arr[i];
				}
				else if(arr[i]<secondSmall && arr[i]>small){
					secondSmall=arr[i];
				}
			}
			return secondSmall;
		}
};
int main() {
    Solution obj;
    vector<int> arr = {3, 1, 4, 4, 5, 2}; // Example input
    int result = obj.secondSmallestElement(arr);
    cout << "Second smallest element: " << result << endl; // Output the second smallest element
    return 0;
}