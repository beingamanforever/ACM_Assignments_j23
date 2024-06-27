#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD=1000000007;
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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (__gcd(a[i],a[j])<=2)
            {
                cout<<"YES";
                return;
            }
            
        }
        
    }
    cout<<"NO";
}
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}