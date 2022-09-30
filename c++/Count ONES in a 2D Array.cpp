
#include <bits/stdc++.h>
using namespace std;

//3.Count ONES in a 2D Array

void CountONES(){
    cout<<"number of rows in your 2D array : ";
    long long int n;
    cin>>n;
    cout<<"number of columns in your 2D array : ";
    long long int m;
    cin>>m;
    cout<<"please insert the elements of your 2D array : ";
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

int main(){
    CountONES();
}
//vaibhav-dixit-flow6979
