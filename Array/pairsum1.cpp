//Pair Sum - Brute Force

#include <iostream>
using namespace std;
int pairSum(int *arr,int target , int n){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                cout<<"The pair sum index are : "<<i<<" , "<<j<<endl;
            }
        }
    }
}

int main() {
    int arr[] = {7, 11, 12, 17, 20}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 19;

    pairSum(arr, target, n);

    return 0;
}