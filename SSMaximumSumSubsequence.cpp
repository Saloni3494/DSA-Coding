#include <iostream>
#include <vector>
using namespace std;
// Function to calculate the maximum sum of a subsequence
// where each element is greater than the previous one
//Example: Given an array {1, 101, 2, 3, 100},
// it will return 106 as the maximum sum of the subsequence

int calc(vector<int>& arr){
	int sum=0;
	for(int i=0;i<arr.size()-1;i+=2){
		if(arr[i]<arr[i+1]){
			sum+=arr[i+1];
			i++;
		}
		else{
			sum+=arr[i+1];
		}
	}
	return sum;
}
int main() {
    vector<int> arr = {1, 101, 2, 3, 100};
    int maxSum = calc(arr);
    cout << "Maximum sum of subsequence: " << maxSum << endl;
    return 0;
}