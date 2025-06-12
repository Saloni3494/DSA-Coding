#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int calc(vector<int>& arr){
	unordered_map<int, int> freq;
	int len = arr.size()/2;
	
	for(int num : arr){
		freq[num]++;
		
		if(freq[num]>len){
			return num;
		}
	}
	return -1;
}
int main(){
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4}; // Example input
    int result = calc(arr);
    
    cout<< "Majority element: " << result << endl; // Output the majority element
    return 0;
}

// Time complexity: O(n)
// Space complexity: O(n)