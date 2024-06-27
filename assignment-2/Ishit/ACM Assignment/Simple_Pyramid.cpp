#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n ;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}