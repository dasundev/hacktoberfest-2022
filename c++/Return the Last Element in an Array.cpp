
#include <bits/stdc++.h>
using namespace std;

//6.Return the Last Element in an Array

void lastElement(){
    cout<<"size of array is : ";
    long long int n;
    cin>>n;
    vector<int> v(n);
    cout<<"insert the elements of the array : ";
    for(long long int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"last element in the array is: "<<v[n-1];
}

int main(){
    lastElement();
}
//vaibhav-dixit-flow6979
