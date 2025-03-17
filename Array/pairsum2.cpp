//Pair Sum - Optimal Solution 
//Time complexity 0(n) - because the array will travel once 

#include <iostream>
using namespace std;

int pairSum(int *arr, int target, int n) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        int sum = arr[i] + arr[j];

        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            cout << "Pair found at indices: " << i << " and " << j << endl;
            return 1; // Indicates a pair was found
        }
    }

    cout << "No pair found" << endl;
    return 0; // Indicates no pair was found
}

int main() {
    int arr[] = {7, 11, 12, 17, 20}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 19;

    pairSum(arr, target, n);

    return 0;
}
