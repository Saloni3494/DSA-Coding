#include <conio.h>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution{
	public:
		bool isPossible(int a[], int b[], int n, int k){
			sort(a, a+n); //increasing;
			sort(b, b+n, greater<int>());
			
			for(int i=0;i<n;i++){
				if(a[i]+b[i]<k){
					return false;
				}
			}
			return true;
			
		}
};

int main(){
	int a[] = { 2, 1, 3 };
    int b[] = { 7, 8, 9 };
    int k = 10;
    int n = sizeof(a) / sizeof(a[0]);
	
	Solution obj;
	cout<<obj.isPossible(a,b,n,k);
	
}
