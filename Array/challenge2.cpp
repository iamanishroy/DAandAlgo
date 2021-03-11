#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int rbd = 0;
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > max) && (i == n - 1 || a[i] > a[i + 1]))
        {
            rbd++;
        }
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << rbd;

    return 0;
}
