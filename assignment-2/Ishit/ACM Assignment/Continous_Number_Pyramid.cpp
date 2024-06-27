#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n ;
    cin>>n;
    ll counter=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<counter<<" ";
            counter++;
        }
        cout<<"\n";
    }
    
    return 0;
}