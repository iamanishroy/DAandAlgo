#include <bits/stdc++.h>
using namespace std;

bool isPythogoryanTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    return false;
}

int32_t main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (isPythogoryanTriplet(x, y, z))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

// int sum(int n)
// {
//     int ans = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         ans += i;
//     }
//     return ans;
// }
// int32_t main()
// {
//     int n;
//     cin >> n;
//     cout << sum(n) << endl;
// }