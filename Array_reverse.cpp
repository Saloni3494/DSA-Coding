#include <stdio.h>
#include <conio.h>
#include <vector>
#include <iostream>
using namespace std;
void Array_reverse(vector<int> &arr){
	int arrSize = arr.size();
	
	vector<int> temp(arrSize);
	
	int n = arrSize-1;
	
	for(int i=0;i<arrSize;i++){
		temp[n] = arr[i];
		n--;
	}
	
	for(int i=0;i<arrSize;i++){
		arr[i] = temp[i];
		cout<<arr[i]<< " ";
	}
	
}

int main(){
	vector<int> arr = {5,2,8,6,9,21};
	Array_reverse(arr);
	getch();
    return 0;
}