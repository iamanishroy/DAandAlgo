#include <iostream>
using namespace std;

int main()
{
    int p, q, r, i, j, k, sum;
    cin >> p >> q >> r;
    int m1[p][q], m2[q][r], m3[p][r];
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            cin >> m1[i][j];
        }
    }
    for (i = 0; i < q; i++)
    {
        for (j = 0; j < r; j++)
        {
            cin >> m2[i][j];
        }
    }
    
    // calculating...
    cout << "Multiplication:-" << endl;
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < r; j++)
        {
            sum = 0;
            for (k = 0; k < q; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            m3[i][j] = sum;
        }
    }

    // print
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}