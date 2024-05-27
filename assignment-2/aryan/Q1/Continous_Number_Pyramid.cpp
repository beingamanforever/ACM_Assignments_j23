#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, counter = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << "\n";
    }
    return 0;
}