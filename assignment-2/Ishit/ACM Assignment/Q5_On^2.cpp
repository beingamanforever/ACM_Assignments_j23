#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD=1000000007;
int main()
{
    ll n;cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll pref_sum[n+1];
    ll max_sum=0,l(0),r(0);
    pref_sum[0]=0;

    for (int i = 1; i <= n; i++)
    {
        pref_sum[i]=pref_sum[i-1]+a[i-1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((pref_sum[i+1]-pref_sum[j])>max_sum)
            {
                max_sum=(pref_sum[i+1]-pref_sum[j]);
                l=j;
                r=i;
            }
            
        }
        
    }
    cout<<"left index is "<<l<<" right index is "<<r<<" sum is "<<max_sum; //l is left index of sub array and r is right index //l is left index of sub array and r is right index
    return 0;
}