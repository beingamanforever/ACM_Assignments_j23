#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1000000007;
ll power(ll A, ll B)
{
    if (B == 0)
        return 1;
    ll res = power(A, B / 2);
    if (B % 2)
        return (res * res * A);
    else
        return (res * res);
}
void solve()
{
    ll n;
    cin >> n;
    int r[3] = {0};
    for (int i = 2; i < cbrt(n); i++)
    {
        if (n % i == 0)
        {
            r[0] = i;
            break;
        }
    }
    if (r[0] == 0)
    {
        cout << "NO";
        return;
    }
    n = n / r[0];
    for (int i = 2; i < sqrt(n); i++)
    {
        if (i == r[0])
        {
            continue;
        }
        if (n % i == 0)
        {
            if (i*i==n)
            {
                cout<<"NO";
                return;
            }
            
            r[1] = i;
            break;
        }
    }
    if (r[1] == 0)
    {
    // cout<<r[0]<<" "<<r[1]<<" "<<r[2];
        cout << "NO";
        return;
    }
    r[2] = n / r[1];
    cout << "YES"<<endl;
    cout<<r[0]<<" "<<r[1]<<" "<<r[2];

}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}