#include<iostream>
using namespace std;
int main(){
	int n,max,sum = 0;
	cout<<"\n Enter the Odd numbers maximum limit: ";
	cin>>max;
	
	cout<<"\nOdd numbers between 0 and "<< max <<" = ";
	for(n=1;n<=max;n++){
		if(n%2 != 0){
			cout<<n<<"";
			cout<<",";
			sum = sum + n;
			}
	}
	
	cout<<"\nThe sum of Odd numbers upto "<< max <<" = "<< sum <<endl;
	return 0;

}
