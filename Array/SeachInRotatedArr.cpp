#include <iostream>
using namespace std;
int searchRotatedArray(int *arr,int n, int target){
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid] == target){
            return mid;
        }

        if(arr[st] <= arr[mid]){
            if(arr[st] <= target && target <= arr[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{
            if(arr[mid] <= target && target <=arr[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
}
int main() {
    int arr[] = {70,10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(int);
    int target  = 10;
    int res  = searchRotatedArray(arr,n,target);
    cout<<"Target found in : "<<res<<"th index"<<endl;
    return 0;
}