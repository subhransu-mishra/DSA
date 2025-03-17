// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int majorityElement(int *arr,int n){
    for(int i = 0;i<n;i++){
        int freq = 0;
        int val = arr[i];
        for(int j = 0;j<n;j++){
            int el = arr[j];
            if(el == val){
                freq++;
            }
        }
        if(freq>n/2){
            return arr[i];
        }
    }
    return -1;
}
int main() {
   int arr[] = {1,2,3,2,1,2,1,3,2,1,1,3,1,1,1,1};
   int n = sizeof(arr) / sizeof(int);
   int result = majorityElement(arr,n);
   if(result != -1){
    cout<<"Majority Element will be : "<<result<<endl;
   }
   else{
    cout<<"Majority element not found"<<endl;
   }
   return 0;
}