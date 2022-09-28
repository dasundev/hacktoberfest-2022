#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"size of array is : ";
    long long int n,t=INT_MIN;
    cin>>n;
    vector<long long int> v;
    cout<<"insert the elements of the array : ";
    for(long long int i=0;i<n;i++){
        long long int temp;
        cin>>temp;
        if(temp!=t){
            v.push_back(temp);
            t=temp;
        }
    }
    cout<<"your array without any duplicate elements is : ";
    for(auto k:v){cout<<k<<" ";}
}
//vaibhav-dixit-flow6979