#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll add_sum = 0, sum = 0, l = 0, r;

    for (int i = 0; i < n; i++)
    {
        add_sum += a[i];
        if (add_sum < 0)
        {
            add_sum = 0;
            l = i + 1;
        }
        if (sum < add_sum)
        {
            r = i;
            sum = add_sum;
        }
    }
    if (sum > 0)
        cout << "left index is " << l << "\nright index is " << r << "\nsum is " << sum;
    else
        cout << "null sub-array has maximum sum of 0.";
    return 0;
}