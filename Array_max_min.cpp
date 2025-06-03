#include <iostream>
#include <conio.h>
using namespace std;
void Array_max_min(){
    int arr[] = {29,60,21,22,10,5,3,4,2,1};
    int max = arr[0];
    int min = arr[0];
	int size = sizeof(arr) / sizeof(arr[0]);
	
	
	for(int i=0;i<size;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	
	for(int i=0;i<size;i++){
		if(min>arr[i]){
			min = arr[i];
		}
	}

    cout<< "Max: " << max << endl;
    cout<< "Min: " << min << endl;
	getch();
}

int main() {
    Array_max_min();  // Call the function from main
    return 0;
}

