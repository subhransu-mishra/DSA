// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<string>
#include<cctype> //include this to use isalnum() method

using namespace std;
bool isAlphaNumeric(char ch){ //We can use this logic to check that wheather number is alphanumeric or not
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}


int main() {
    string str = "hii";
    int st = 0, end = str.length()-1;
    while(st<=end){
        if(!isalnum (str[st])){ //here isalnum is an inbuilt method to check wheather the number is alphanumeric or not 
            st++;
            continue;
        }
        if(!isalnum (str[end])){
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end])){
           cout<<"False"<<endl;
           return 0;
        }
        st++;
        end--;
    }

    cout<<"True"<<endl;
    return 0;
}