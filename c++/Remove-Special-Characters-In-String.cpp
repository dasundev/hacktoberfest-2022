#include<iostream>
using namespace std;

//Function for removing the special characters in a string
string removeSpecialCharacter(string s)
{
    bool flag = 0;
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] >= 'A' && s[i] <= 'Z')) {
            ans += s[i];
            flag = 1;
        }
    }
    if (flag == 0) ans = "-1";
    return ans;
}

int main()
{
    string s;
    cout<<"Enter the String"<<endl;
    cin>>s;
    string newst;
    newst=removeSpecialCharacter(s);
    cout<<"Updated String Is:-"<<newst<<endl;
    return 0;
}