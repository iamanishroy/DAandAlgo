#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int count = 1; count <= n; count++)
    {
        int l;
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        if (l % 2 != 0)
        {
            for (int i = 0; i < l / 2; i++)
                cout << arr[i] << " " << arr[l - 1 - i] << " ";
            cout << arr[l / 2];
        }
        else
            for (int i = 0; i < l / 2; i++)
                cout << arr[i] << " " << arr[l - 1 - i] << " ";
        cout << endl;
    }

    return 0;
}