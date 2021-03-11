#include <iostream>
using namespace std;
int *insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
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
    static int *sorted = arr;
    return sorted;
}

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int *a = insertionSort(ar, n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] > -1)
        {
            bool available = false;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + 1 == a[j])
                {
                    available = true;
                    break;
                }
            }
            if (!available)
            {
                cout << a[i] + 1 << endl;
                break;
            }
        }
    }
    return 0;
}