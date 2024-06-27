#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n=1;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i%2)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i/2+1; j++)
        {
            cout<<"*   ";
        }
        cout<<endl;
    }
    for (int i = n-2; i >= 0; i--)
    {
        if (i%2)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i/2+1; j++)
        {
            cout<<"*   ";
        }
        cout<<endl;
    }
    
    return 0;
}