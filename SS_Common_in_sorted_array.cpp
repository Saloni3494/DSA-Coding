#include <iostream>
#include <vector>
using namespace std;

vector<int> calc(vector<int> arr1, vector<int> arr2, vector<int> arr3){
    vector<int> res;
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            res.push_back(arr1[i]);
            i++; j++; k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }

    if (res.empty()) {
        res.push_back(-1);
    }

    return res;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 5, 6};
    vector<int> arr3 = {1, 2, 3, 4};

    vector<int> result = calc(arr1, arr2, arr3);

    cout << "Common elements: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
