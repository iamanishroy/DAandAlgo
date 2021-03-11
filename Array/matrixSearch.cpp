#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, count, find;
    cin >> n >> m >> find;

    int mat[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    i = 0;
    j = m-1;
    bool found = false;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == find)
        {
            found = true;
            break;
        }
        else if (mat[i][j] > find)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if (found)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}