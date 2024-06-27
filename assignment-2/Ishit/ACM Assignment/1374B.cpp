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
    ll n;
    cin>>n;
    int a(0),b(0);
    while (n)
    {
        if (n%2==0)
        {
            n/=2;
            a++;
            continue;
        }
        else if (n%3==0)
        {
            n/=3;
            b++;
            continue;
        }
        if (n==1)
        {
            break;
        }
        
        cout<<-1;
        return;
    }
    if (b<a)
    {
        cout<<-1;
        return;
    }
    
    cout<<max(-1,2*b-a);
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