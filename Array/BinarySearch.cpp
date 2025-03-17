#include<iostream>
using namespace std;
int binarySearch(int *arr,int n,int key){
    int st = 0;
    int end = n-1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if(arr[mid] == key){
            cout<<"key is present in "<<mid<<" th index";
            break;
        }
        else if (arr[mid] < key){
            st = mid+1;
        }
        else
            end = mid-1;
    }
   return -1; 
}
int main(){
    int arr[] = {2,4,6,8,10,12,14,15,19};
    int n = sizeof(arr) / sizeof(int);
    int key = 19;
    binarySearch(arr,n,key);
    return 0;
}