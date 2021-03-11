#include <iostream>
using namespace std;

int *bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    cout << "Bubble-Sort" << endl;
    static int *sorted = arr;
    return sorted;
}

int *selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Selection-Sort" << endl;
    static int *sorted = arr;
    return sorted;
}

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
    cout << "Insertion-Sort" << endl;
    static int *sorted = arr;
    return sorted;
}

int main()
{
    int n = 6;
    int arr[n] = {12, 45, 95, 25, 766, 33};
    int *sorted = insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << sorted[i] << " ";
    }
    return 0;
}