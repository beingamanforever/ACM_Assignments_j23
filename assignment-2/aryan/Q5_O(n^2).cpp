#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, max_sum = 0, l, r;
    cin >> n;
    ll a[n];
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = a[j] - a[i];
            if (sum > max_sum)
            {
                max_sum = sum;
                l = i + 1;
                r = j;
            }
        }
    }
    if (max_sum > 0)
        cout << "left index is " << l << "\nright index is " << r << "\nsum is " << max_sum;
    else
        cout << "null sub-array has maximum sum of 0.";
    return 0;
}
/*
5
-1 2 3 -4 0
-1 1 4 0 0
left index is 1
right index is 2
sum is 5
*/