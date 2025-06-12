#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int calc(vector<int> &arr, int x)
{
    unordered_set<int> s;

    for (int num : arr)
    {
        if (s.count(num + x) || s.count(num - x))
        {
            return true;
        }
        s.insert(num);
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 5, 3, 4, 2};
    int x = 2; // Example difference
    bool result = calc(arr, x);

    if (result)
    {
        cout << "There exists a pair with the given difference." << endl;
    }
    else
    {
        cout << "No pair with the given difference exists." << endl;
    }

    return 0;
}

// time complexity: O(n)
// space complexity: O(n)