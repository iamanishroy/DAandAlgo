#include <iostream>
using namespace std;

int possiblePath(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int counter = 0;
    for (int i = 1; i <= 6; i++)
    {
        counter += possiblePath(s + i, e);
    }
    return counter;
}
int main()
{
    cout << possiblePath(5, 4) << endl;
    return 0;
}