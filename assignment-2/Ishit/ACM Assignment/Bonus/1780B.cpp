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
    ll n,ans=-1;
    cin>>n;
    ll a[n+1],p[n+1]={0};
    for (ll i = 1; i <= n; i++)
    {
        cin>>a[i];
        p[i]=p[i-1]+a[i];
    }
    for (ll i = 1; i < n; i++)
    {
        ans=max(ans,__gcd(p[i],p[n]-p[i]));
    }
    cout<<ans;
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