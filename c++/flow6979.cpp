#include <bits/stdc++.h>
using namespace std;

//1.remove duplicates from an array

void RemoveDuplicatesFromAnArray(){
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
    //RemoveDuplicatesFromAnArray();
    LargestNumberInArray();
}
//vaibhav-dixit-flow6979
