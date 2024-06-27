#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < (n-i); j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
    return 0;
}