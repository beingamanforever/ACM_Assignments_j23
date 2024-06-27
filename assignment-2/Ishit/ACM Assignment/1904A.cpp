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
    set<pair<int,int>> king,queen;
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    int k[8][2] = {0};
    int q[8][2] = {0};
    int p[8] = {1, 1, -1, -1, 1, 1, -1, -1};
    int r[8] = {1, -1, 1, -1, 1, -1, 1, -1};
    for (int i = 0; i < 8; i++)
    {
        if (i < 4)
        {
            k[i][0] = xk + p[i] * a;
            k[i][1] = yk + r[i] * b;
            q[i][0] = xq + p[i] * a;
            q[i][1] = yq + r[i] * b;
        }
        else
        {
            k[i][0] = xk + p[i] * b;
            k[i][1] = yk + r[i] * a;
            q[i][0] = xq + p[i] * b;
            q[i][1] = yq + r[i] * a;
        }
        king.insert(make_pair(k[i][0],k[i][1]));
        queen.insert(make_pair(q[i][0],q[i][1]));
    }
    int ans = 0;
    for (auto x:king)
    {
        if (queen.find(x)!=queen.end())
        {
            ans++;
        }
        
    }
    
    cout<<ans;
    
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