#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Function to find duplicates in an array
vector<int> calc(vector<int> &arr)
{
    unordered_map<int, int> freq;
    vector<int> duplicates;

    for (int num : arr)
        freq[num]++;

    for (auto &pair : freq)
    {

        if (pair.second > 1)
            duplicates.push_back(pair.first);
    }

    return duplicates;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2};
    vector<int> duplicates = calc(arr);
    for (int num : duplicates)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
