#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {10,20,30,40,50};

    cout<<"Size of the vector is "<<vec.size()<<endl;;//Size function to calculate the size 

    vec.push_back(60);//push_back fuction is to push element on the end of the vector
    vec.push_back(70);
    vec.push_back(80);
    for(int i : vec){ //for each loop
        cout<<i<<endl;
    }
    cout<<"Size of the vector is "<<vec.size()<<endl;
    vec.pop_back();//pop_back fuction is used to delete element from the end of the vector
    cout<<vec.size()<<endl;
    cout<<"The first element of vector is : "<<vec.front()<<endl;  //front fuction is used to find the first element of the vector
    cout<<"The last element of the array is : "<<vec.back()<<endl;

    cout<<"In 4th index the element present is : "<<vec.at(4)<<endl;
}