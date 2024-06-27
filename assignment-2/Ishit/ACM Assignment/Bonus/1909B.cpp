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
    ll c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool b=true;
    ll t =2;
    while (b)
    {
        for (int i = 0; i < n; i++)
        {
            c[i]=a[i]%t;

        }
        sort(c,c+n);
        for (int i = 0; i < n-1; i++)
        {
            if (c[i]!=c[i+1])
            {
                b=false;
                cout<<t;
            }
            
        }
        
        t=t<<1;
    }
    
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