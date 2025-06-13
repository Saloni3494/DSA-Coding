#include <iostream>
#include <algorithm>

using namespace std;
// Function to count triplets with sum less than given value
// This function returns count of triplets with sum less than
//Example: Given an array {5, 1, 3, 4, 7} and sum = 12,
// it will return 4 as the triplets are:

int countTriplets(int arr[], int n, int sum)
{
    // Sort input array
    sort(arr, arr+n);

    // Initialize result
    int ans = 0;

    // Every iteration of loop counts triplet with
    // first element as arr[i].
    for (int i = 0; i < n - 2; i++)
    {
        // Initialize other two elements as corner elements
        // of subarray arr[j+1..k]
        int j = i + 1, k = n - 1;

        // Use Meet in the Middle concept
        while (j < k)
        {
            // If sum of current triplet is more or equal,
            // move right corner to look for smaller values
            if (arr[i] + arr[j] + arr[k] >= sum)
                k--;

            // Else move left corner
            else
            {
                // This is important. For current i and j, there
                // can be total k-j third elements.
                ans += (k - j);
                j++;
            }
        }
    }
    return ans;
}

// Driver program
int main()
{
    int arr[] = {5, 1, 3, 4, 7};
    int n = sizeof arr / sizeof arr[0];
    int sum = 12;
    cout << countTriplets(arr, n, sum) << endl;
    return 0;
}