#include <iostream>
#include <vector>
using namespace std;
// Function to calculate the product of all elements except itself
vector<int> calc(vector<int> arr)
{
    int zeros = 0, idx = -1;
    vector<int> res(arr.size(), 0);
    int prod = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
            idx = i;
        }
        else
        {
            prod *= arr[i];
        }
    }

    // If there is no zeros
    if (zeros == 0)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            res[i] = prod / arr[i];
        }
    }

    // If one zero
    else if (zeros == 1)
    {
        res[idx] = prod;
    }

    // if more zeros are present the the whole result will be zero
    return res;
}

int main()
{
    vector<int> arr = {10, 3, 5, 6, 2};
    vector<int> res = calc(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
