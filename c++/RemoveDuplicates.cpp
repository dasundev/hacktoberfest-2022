#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll arr[10] = {1, 2, 3, 4, 4, 3, 5, 6, 7, 10};

    ll hash[10];
    vector<ll> vec;
    for (int i = 0; i < 10; i++)
    {
        hash[arr[i]] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        if (hash[arr[i]] > 0)
        {
            continue;
        }
        else
        {
            vec.push_back(arr[i]);
            hash[arr[i]]++;
        }
    }
    ll newarr[vec.size()];
    for (int i = 0; i < vec.size(); i++)
    {
        newarr[i] = vec[i];
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << newarr[i] << " ";
    }
    return 0;
}

// Time Complexivity O(n)