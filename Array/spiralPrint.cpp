#include <iostream>
using namespace std;

int main()
{
    int n, m, i;
    cin >> n >> m;
    int ar[n][m];
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }
    int row_S = 0, row_E = n - 1, col_S = 0, col_E = m - 1;
    while (row_S <= row_E && col_S <= col_E)
    {
        // for row_S
        for (i = col_S; i <= col_E; i++)
        {
            cout << ar[row_S][i] << " ";
        }
        row_S++;

        // for col_E
        for (i = row_S; i <= row_E; i++)
        {
            cout << ar[i][col_E] << " ";
        }
        col_E--;

        // for row_E
        for (i = col_E; i >= col_S; i--)
        {
            cout << ar[row_E][i] << " ";
        }
        row_E--;

        // for col_S
        for (i = row_E; i >= row_S; i--)
        {
            cout << ar[i][col_S] << " ";
        }
        col_S++;
    }

    return 0;
}
