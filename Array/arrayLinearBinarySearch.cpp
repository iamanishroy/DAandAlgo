#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    cout << "bin-srch" << endl;
    int s = 0;
    int e = n-1;
    while (s < e)
    {
        int mid = (s + e / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int linearSearch(int arr[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for " << i << " position : ";
        cin >> arr[i];
    }
    cout << endl;
    int s;
    cout << "Enter the searching element : ";
    cin >> s;

    cout << binarySearch(arr, n, s) << endl;

    return 0;
}