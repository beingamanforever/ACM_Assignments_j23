#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int n = 4, k = 5, t = 0;

    // 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        cout << endl;
    }
    cout << endl;

    // 2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        cout << endl;
    }
    cout << endl;

    // 3
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        cout << endl;
    }
    cout << endl;

    // 4
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        cout << endl;
    }
    cout << endl;

    // 5
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (n - i); j++)
        {
            printf("* ");
        }
        cout << endl;
    }
    cout << endl;

    // 6
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        cout << endl;
    }
    cout << endl;

    // 7
    for (int i = 0; i < n + 1; i++)
    {
        if (i % 2)
        {
            cout << " ";
        }

        // for (int j = 0; j < n - i - 1; j++)
        // {
        //     printf(" ");
        // }
        for (int j = 0; j < i / 2 + 1; j++)
        {
            printf("* ");
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if ((n - 1 + i) % 2)
        {
            cout << " ";
        }

        // for (int j = 0; j < n - i - 1; j++)
        // {
        //     printf(" ");
        // }
        for (int j = 0; j < n / 2 - i / 2; j++)
        {
            printf("* ");
        }
        cout << endl;
    }
    cout << endl;

    // 8

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i / 2 + 1; j++)
        {
            printf(" *");
        }
        if (i % 2)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n / 2 - i / 2; j++)
        {
            printf(" *");
        }
        if ((n - 1 + i) % 2)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 9
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (n - i); j++)
        {
            printf("* ");
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        cout << endl;
    }
    cout << endl;

    // 10

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (n - i); j++)
        {
            printf("* ");
        }
        cout << endl;
    }
    cout << endl;

    // 11
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", i + 1);
        }
        cout << endl;
    }
    cout << endl;

    // 12
    k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", k++);
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}


/*

for (int i = 0; i < n + 1; i++)
{
    for (int j = 0; j < n - i; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < i / 2 + 1; j++)
    {
        printf("  *");
    }
    if (i % 2)
    {
        cout << " ";
    }
    cout << endl;
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i + 1; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < n / 2 - i / 2; j++)
    {
        printf("  *");
    }
    if ((n - 1 + i) % 2)
    {
        cout << " ";
    }
    cout << endl;
}
cout << endl;


      *
     *
    *  *
   *  *
  *  *  *
   *  *
    *  *
     *
      *

*/