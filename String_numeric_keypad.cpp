#include <conio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution{
	public:
		string numericValue(string arr[], string str){
			string output;
			for(int i=0;i<str.length();i++){
					
				if(str[i] == ' '){
					output+='0';
				}
				else{
					int position = str[i]-'A';
					output+=arr[position];
				}
			}
			return output;
			
		}
};

int main(){
	string s[] = {"2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999"};
	string str="HELLO WORLD";
	Solution obj;
	
	cout<<obj.numericValue(s,str);
	return 0;
}
