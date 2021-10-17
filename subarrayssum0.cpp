#include <iostream>
#include <unordered_map>
using namespace std;
 
// Function to print all subarrays with a zero-sum
// in a given array
void printAllSubarrays(int arr[], int n)
{
    // consider all subarrays starting from `i`
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
 
        // consider all subarrays ending at `j`
        for (int j = i; j < n; j++)
        {
            // sum of elements so far
            sum += arr[j];
 
            // if the sum is seen before, we have found a subarray
            // with zero-sum
            if (sum == 0) {
                cout << "Subarray [" << i << "…" << j << "]\n";
            }
        }
    }
}
 
int main()
{
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printAllSubarrays(arr, n);
 
    return 0;
}
