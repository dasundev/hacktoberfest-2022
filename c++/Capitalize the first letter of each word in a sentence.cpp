
#include <bits/stdc++.h>
using namespace std;

//5.Capitalize the first letter of each word in a sentence

void Capitalization(){
    string str;
   char ch;
   int len, i, asc_val;
   cout<<"Enter your String: ";
   getline(cin,str);
   len = str.size();
   for(i=0; i<len; i++){
      ch = str[i];
      if(i==0){
         asc_val = ch;
         if(asc_val>=97 && asc_val<=122){
            asc_val = asc_val-32;
            ch = asc_val;
            str[i] = ch;
         }
      }
      if(ch==' '){
         ch = str[i+1];
         asc_val = ch;
         if(asc_val>=97 && asc_val<=122){
            asc_val = asc_val-32;
            ch = asc_val;
            str[i+1] = ch;
         }
      }
   }
   cout<<"\nThe new string is:\n\n";
   cout<<str<<endl;
}

int main(){
    Capitalization();
}
//vaibhav-dixit-flow6979
