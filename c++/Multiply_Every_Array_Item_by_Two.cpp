#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Multiplying each element of array by 2
    for(int i=0; i<n; i++){
        arr[i] *= 2;
    }

    cout<<"The final array after multiplying each element by 2 is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
