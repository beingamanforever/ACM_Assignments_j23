#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD=1000000007;
int main()
{
    ll n;cin>>n;
    ll a[n];
    ll max_sum=0,l,r;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int sum=0;
            for (int k = j; k <= i; k++)
            {
                sum+=a[k];
            }
            if (sum>=max_sum)
            {
                max_sum=sum;
                l=j;
                r=i;
            }
            
            
        }
        
    }
   cout<<"left index is "<<l<<" right index is "<<r<<" sum is "<<max_sum; //l is left index of sub array and r is right index //l is left index of sub array and r is right index
    return 0;
}