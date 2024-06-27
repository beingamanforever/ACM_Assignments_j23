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
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=0,tmp(0);
    for (int i = 0; i < n-1; i++)
    {
        if ((a[i]-a[i+1])%2==0)
        {
            tmp++;
        }
        else 
        {
            ans+=max(0,tmp);
            tmp=0;
        }
        if (i==n-2)
        {
            ans+=max(0,tmp);
        }
        
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