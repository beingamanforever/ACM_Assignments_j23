#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
// LLONG_MIN
// O(n^3)
ll subarrON3(vector<ll> &v)
{
    ll m1 = v[0];
    ll n = v.size();
    ll i = 0;
    for (; i < n; ++i)
    {
        for (ll j = i; j < n; ++j)
        {
            ll sum = 0;
            for (ll k = i; k <= j; ++k)
            {
                sum += v[k];
            }
            m1 = max(m1, sum);
        }
    }
    i = 0;
    return max(m1, i);
    // return max(*(&m1), 0);
}

// O(n^2)
ll subarrON2(vector<ll> &v)
{
    ll m1 = v[0];
    ll n = v.size();
    ll i = 0;
    for (; i < n; ++i)
    {
        ll sum = 0;
        for (ll j = i; j < n; ++j)
        {
            sum += v[j];
            m1 = max(m1, sum);
        }
    }
    i = 0;
    return max(m1, i);
}

// O(n^1)
ll subarrON1(vector<ll> &v)
{
    ll m1 = v[0];
    ll m2 = v[0];

    for (ll i = 1; i < v.size(); ++i)
    {
        m2 = max(v[i], m2 + v[i]);
        m1 = max(m1, m2);
    }

    m2 = 0;
    return max(m1, m2);
}

int main()
{
    ll n = 9, k = 0, t = 0;
    vector<ll> v = {-5, -7, -2, -8};
    // vector<ll> v = {-5, 6, -3, -7, 10};
    // vector<ll> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    k = subarrON1(v);
    cout << k << "\n";

    // k = subarrON2(v);
    // cout << k << "\n";
    
    // k = subarrON3(v);
    // cout << k << "\n";

    return 0;
}