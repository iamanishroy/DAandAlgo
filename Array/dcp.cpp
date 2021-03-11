#include <iostream>
using namespace std;

int findMax(int **arr, int x, int y, int i, int j)
{
    int ret;
    if (x <= i && y <= j)
    {
        ret = arr[i][j];
    }
    else if (x <= i)
    {
        ret = arr[i][j] + findMax(arr, x, y, i, j + 1);
    }
    else if (y <= j)
    {
        ret = arr[i][j] + findMax(arr, x, y, i + 1, j);
    }
    else
    {
        int downPath = arr[i][j] + findMax(arr, x, y, i + 1, j);
        int rightPath = arr[i][j] + findMax(arr, x, y, i, j + 1);
        ret = max(downPath, rightPath);
    }

    return ret;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int **arr = new int *[x];
    for (int i = 0; i < x; i++)
    {
        arr[i] = new int[y];
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "max-made : " << findMax(arr, x - 1, y - 1, 0, 0) << endl;
    return 0;
}