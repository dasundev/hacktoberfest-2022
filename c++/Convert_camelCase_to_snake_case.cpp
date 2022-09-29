#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"Enter the camelCase string: "<<endl;
    string camelCase;
    cin>>camelCase;
    cout<<endl;
    string snake_case;
    //LOGIC:
    //for each character in the given camelCase string we append it to the snake_case string 
    //if it is not the start of a word ie. it is not a capital letter
    //otherwise if it is the start of a word ie. it is a capital letter then 
    //we append '_' and the lower case of the capital character to the snake_case string  
    //as per the rules of snake case
    for(char c: camelCase){
        if(c>=65 && c<=90){//Range of ASCII values of capital letter is [65, 90]
            snake_case += "_";
            snake_case += c+32;//Add 32 to convert to lower case since the range of ASCII values of lower case is [97, 122]
        }else{
            snake_case += c;
        }
    }
    cout<<"The given string in snake_case is: "<<endl;
    cout<<snake_case;
    return 0;
}
