#include<iostream>
using namespace std;

//Function to reverse the array
void Reverse(int *arr,int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    cout<<"Enter size of the array : ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter Elements (space-separated) : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array Before Reversing : ";
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    Reverse(arr,size);
    cout<<"Array After Reversing : ";
    for(int x : arr){
        cout<<x<<" ";
    }

    return 0;
}
