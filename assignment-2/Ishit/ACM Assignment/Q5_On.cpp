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
    
    ll sum_ending_here=0,sum_so_far=0,l=0,r;

    for (int i=0;i<n;i++)
    {
        sum_ending_here+=a[i];
        if (sum_ending_here<0)
        {
            sum_ending_here=0;
            l=i+1;
        }
        if (sum_so_far<sum_ending_here)
        {
            sum_so_far=sum_ending_here;
            r=i;
            
        }
        
    }
    cout<<"left index is "<<l<<" right index is "<<r<<" sum is "<<sum_so_far; //l is left index of sub array and r is right index
    return 0;
}