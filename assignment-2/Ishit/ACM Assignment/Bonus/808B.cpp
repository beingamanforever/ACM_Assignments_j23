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
    int n,k;
    cin>>n>>k;
    ll a[n];
    ll sum(0);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (i<k)
        {
            sum+=a[i];
        }
        
    }
    if (n==k)
    {
        cout<<sum;
        return;
    }
    
    ll b[n-k+1]={sum};
    for (int i = 1; i < n-k+1; i++)
    {
        b[i]=b[i-1]-a[i-1]+a[k+i-1];
        sum+=b[i];
        // t+=b[i];
    }
    cout<<fixed<<setprecision(10)<<(double)sum/(double)(n-k+1);
    
    
    
     
}
int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
// 0 1 2 3 4 5 i i+1 i+2.... 
//             1 2 3 4   kth