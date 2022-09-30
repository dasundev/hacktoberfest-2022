
// #Return the Sum of Two Numbers #1

#include<iostream>
using namespace std ;

int  Sum_of_Two_Numbers(int num1,int num2)
{
    return num1+num2;
} 
int main()
{

   int num1,num2;
   cout<<"Enter First Number : " ;
   cin >> num1 ;
   cout<<"Enter Second Number : " ;
   cin>>num2 ;

   cout<<"Sum Of The Two Numbers is : "<<Sum_of_Two_Numbers(num1,num2);

}
