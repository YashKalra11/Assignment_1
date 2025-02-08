#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;



bool isPalindrome(string str){
    
    transform(str.begin(),str.end(),str.begin(),::tolower);
    string temp = str;
    reverse(temp.begin(),temp.end());
    if(temp == str){
        return true;
    }
    return false;
}



int main(){

    string str;
    cin>>str;

    if(isPalindrome(str)){
        cout<<"Yes";

    }

}