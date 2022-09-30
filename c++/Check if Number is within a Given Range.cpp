
#include <bits/stdc++.h>
using namespace std;

//7.Check if Number is within a Given Range

void checkInRange(){
    cout<<"enter the starting number of the range : ";
    long long int n;
    cin>>n;
    cout<<"enter the ending number of the range : ";
    long long int m;
    cin>>m;
    cout<<"enter the number you want to check for : ";
    long long int k;
    cin>>k;
    if(k>=n && k<=m)cout<<"YES, this number is within the given range";
    else cout<<"NO, this number is not in the given range";
}
int main(){
    checkInRange();
}
//vaibhav-dixit-flow6979
