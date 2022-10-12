//Sum of Odd Numbers 13 using c++
#include<iostream>
using namespace std;

int main()
{
	int number, maximum, sum = 0;
	
	cout << "\nPlease Enter the Odd Numbers Maximum Limit  =  ";
	cin >> maximum;	
	
	cout <<"\n\nOdd Numbers between 0 and " << maximum << " = ";
	for(number = 1; number <= maximum; number++)
	{
  		if ( number % 2 != 0 ) 
		{
  			cout << number << " ";
			sum = sum + number;
		}
	}
	
	cout << "\nThe Sum of All Odd Numbers upto " << maximum << " = " << sum;
	
 	return 0;
}
