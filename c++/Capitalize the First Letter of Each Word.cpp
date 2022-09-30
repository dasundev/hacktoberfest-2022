// Capitalize the First Letter of Each Word #21
#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter Sentence : \n";
    getline(cin, s);
    if(s[0]>=97 && s[0]<=123)
    s[0]-=32 ;
    for(int i=1;i<s.length();i++)
    {
        
         if(s[i]==' ')
         {
            if(s[i+1]>=97 && s[i+1]<=123)
            s[i+1]-=32;
         }
    }
    
    cout<<s;

}