// Finding highest integer in an array using recursion 
#include<bits/stdc++.h>
using namespace std;
void max_element(int i, int arr[], int max,int n){
    // base case 
    if(i==n) {
        cout<<max<<endl;
        return;
    }
    if(arr[i]>max) max = arr[i];
    max_element(i+1, arr, max, n);
}

int main() {

int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];

max_element(0, arr, 0,n);

return 0;
}
