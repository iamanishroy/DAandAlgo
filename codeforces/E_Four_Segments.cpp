#include <iostream>
using namespace std;

int calcArea(int arr[])
{
    for (int i = 1; i < 4; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    return arr[0] * arr[2];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int len[4];
        cin >> len[0] >> len[1] >> len[2] >> len[3];
        cout << calcArea(len) << endl;
    }
    return 0;
}