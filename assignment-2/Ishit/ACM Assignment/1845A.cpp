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
    int n,k,x;
    cin>>n>>k>>x;
    bool a[k+1]={false};
    // cout<<a[3];
    a[x]=true;
    if (!a[1])
    {
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"1 ";
        }
        return;
    }
    if (k==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if (n%2==0)
    {
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        for (int i = 0; i < n/2; i++)
        {
            cout<<"2 ";
        }
        return;
    }
    if (k==2 && n%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    
    cout<<"YES"<<endl;
    cout<<n/2<<endl;
    cout<<3;
    for (int i = 0; i < n/2-1; i++)
    {
        cout<<" 2";
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