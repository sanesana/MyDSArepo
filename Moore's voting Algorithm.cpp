//This is Boyer Moore Algorithm
//This algo works because the majority Element is greater than n/2 times in particular array

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class code
{
public:
    ll moore(vector<ll> arr, ll n)
    {
        ll element = 0, count = 0;
        for (auto it : arr)
        {
            if (count == 0)
                element = it;
            if (element == it)
                count++;
            else
                count--;
        }
        return element;
    }
};

int main()
{
    ll n, tp;
    cin >> n;
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> tp;
        arr.push_back(tp);
    }
    code object;
    cout << object.moore(arr, n);
    return 0;
}