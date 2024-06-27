#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    for (int i = 0;i<n;i++)
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