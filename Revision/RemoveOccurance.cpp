#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "subhransu";
    string part = "su";
    while(str.length() > 0 && str.find(part) < str.length()){
        str.erase(str.find(part),part.length());
    }
    cout<<str;
    return 0;
}