#include <iostream>
#include<vector>
using namespace std;

void findSumInArray(){
    // issue# 14: find sum of numbers in array
    vector<int> array = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int i = 0; i < array.size(); i++){
        sum += array[i];
    }
    cout << "sum of number in array is " << sum;
}

int main() {
    findSumInArray();
    return 0;
}