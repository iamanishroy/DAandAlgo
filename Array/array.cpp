//  array is a list of variable of similar type

//  datatype arrayName[size];
//  int array[4] = {10,20,30,40};

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for " << i << " position : ";
        cin >> array[i];
    }
    cout << endl;

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = (array[i] > maxNo) ? array[i] : maxNo;
        minNo = (array[i] < minNo) ? array[i] : minNo;
    }
    cout << "MAX No. " << maxNo << endl;
    cout << "MIN No. " << minNo << endl;
    
    return 0;
}