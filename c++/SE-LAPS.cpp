#include <iostream>

using namespace std;
int main (){
   int arr[] = { 2,4,16,256,0,2022,-1 };
   int n = 7, sum = 0;
   for(int i = 0; i<n ; i++){
      sum+=arr[i];
   }
   cout<<"Array Sum Is = "<<sum;
   return 0;
}
