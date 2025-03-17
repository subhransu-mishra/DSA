#include<iostream>
using namespace std;
int productArray(int *arr,int n ){
    int ans[n];
    for(int i = 0;i<n;i++){
        int product = 1;
        for(int j = 0;j<n;j++){
            if(i != j){
                product *= arr[j];
            }
        }
        ans[i] = product;
         
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" , ";
    }
}
int main(){
    int arr[] = {2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(int);
    productArray(arr,n);
    return 0;
}