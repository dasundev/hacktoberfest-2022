
#include <bits/stdc++.h>
using namespace std;

//2.find the largest number in an array

void LargestNumberInArray(){
    cout<<"size of array is : ";
    long long int n;
    cin>>n;
    vector<int> v(n);
    cout<<"insert the elements of the array : ";
    for(long long int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<"largest number in th array is : "<<v[n-1]<<endl;
}

int main(){
    LargestNumberInArray();
}
//vaibhav-dixit-flow6979
