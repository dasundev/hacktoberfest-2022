#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"number of rows in your 2D array : ";
    long long int n;
    cin>>n;
    cout<<"number of columns in your 2D array : ";
    long long int n;
    cin>>n;
    cout<<"please insert the elements of your 2D array : "
    long long int count=0;
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<m;j++){
            long long int temp;
            cin>>temp;
            if(temp==1)count++;
        }
    }
    cout<<"number of ONES in your 2D array are : ";
    cout<< count;
}
//vaibhav-dixit-flow6979