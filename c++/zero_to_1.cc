#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> reference;

string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};

void storeOnes(){
    for(int i = 0; i < 21; i++){
        reference[ones[i]] = i;
    }
}

int main(){
   
    storeOnes();
    cout<<"Enter The Word ( 0 to 20)"<<endl;
    string test; cin>>test;
    string buffer;


    for(int i = 0; i < test.length(); i++){
        buffer.push_back(test.at(i));
        map<string, int>::iterator it = reference.find(buffer);
        if(it != reference.end()){
            cout << (*it).second;
            buffer = "";
        }
    }
    cout << endl << endl;
    return 0;
}