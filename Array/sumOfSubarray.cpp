#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int start = 0, end = 0, sumArSum = ar[0];

    while (sumArSum != sum)
    {
        if (sumArSum < sum)
        {
            if (end != n - 1)
            {
                end++;
                sumArSum += ar[end];
            }
            else
            {
                break;
            }
        }
        else
        {
            start++;
            end = start;
            sumArSum = ar[start];
        }
    }
    cout << start + 1 << " " << end + 1 << endl;

    return 0;
}