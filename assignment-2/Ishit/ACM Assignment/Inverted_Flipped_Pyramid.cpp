#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    for (int i = n; i >=1; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}