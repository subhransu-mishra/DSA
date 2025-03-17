#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int isSpecialCharacter(char ch){
        if((ch >= '9' && ch <= '9') || (tolower(ch) >= 'a' && (tolower(ch) <= 'z'))){
            return true;
        }
}
int main(){
    string str = "Ac3?e3c$a";
    int st = 0;
    int end = str.length();
    while(st<end){
        if(!isSpecialCharacter(str[st])){
            st++;
            continue;
        }
        if(! isSpecialCharacter(str[end])){
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;

    

}