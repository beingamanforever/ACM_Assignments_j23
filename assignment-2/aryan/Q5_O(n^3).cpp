#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, max_sum = 0, l, r;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int sum = 0;
            for (int k = j; k <= i; k++)
                sum += a[k];

            if (sum > max_sum)
            {
                max_sum = sum;
                l = j;
                r = i;
            }
        }
    }
    if (max_sum > 0)
        cout << "left index is " << l << "\nright index is " << r << "\nsum is " << max_sum;
    else
        cout << "Null sub-array has maximum sum of 0.";
    return 0;
}
/*
5
-1 2 3 -4 0
left index is 1
right index is 2
sum is 5
*/