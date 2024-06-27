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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = (a[n-1]-a[0]);
    // ans=max(ans,abs(a[n-1]-a[0]));
    for (int i = 0; i < n - 1; i++)
    {   
        ans = max(ans, (a[i] - a[i + 1]));
    } 
    for (int i = 0; i < n; i++)
    {
        int tmp = max((a[i] - a[0]), (a[n-1] - a[i]));
        ans = max(ans, tmp);
    }
    cout << ans;
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