#include <iostream>
using namespace std;

void dec(int n)
{
    if (n == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << n << endl;
        dec(n - 1);
    }
}
void inc(int n)
{
    if (n == 0)
    {
        cout << n << endl;
    }
    else
    {
        inc(n - 1);
        cout << n << endl;
    }
}

int main()
{
    dec(4);
    cout << endl;
    inc(4);
    return 0;
}