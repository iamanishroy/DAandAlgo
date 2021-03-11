#include <iostream>
using namespace std;

int main()
{

    int n, i, j;
    cin >> n;

    int ar[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }

    // transpose
    cout << "Transposed Matrix :-" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int temp = ar[j][i];
            ar[j][i] = ar[i][j];
            ar[i][j] = temp;
        }
    }
    /*****************************************/
    // int arr[n][n];
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         arr[j][i] = ar[i][j];
    //     }
    // }
    /****************************************/

    // print
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
