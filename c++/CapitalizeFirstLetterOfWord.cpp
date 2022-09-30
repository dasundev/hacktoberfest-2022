#include <iostream>
using namespace std;

int main(){
    string s = "we have to capitalize the first letter of each word of string";
    for(int i=0;i<s.length();i++){
        if(i==0){
            s[i] = toupper(s[i]);
        }else if(s[i-1] == ' '){
            s[i] = toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}