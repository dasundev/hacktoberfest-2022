#include<bits/stdc++.h>
#define MAX_SIZE 20
using namespace std;
int main ()
{
    int arr[MAX_SIZE], n, i, max, min;
    cout << "Enter the size of the array (1 to 20) : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max<<endl;
    cout << "Smallest element : " << min<<endl;
    return 0;
}
