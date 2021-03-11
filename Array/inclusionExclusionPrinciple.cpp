#include <iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    return (n / a + n / b) - n / (a * b);
}
int gcd(int n1, int n2)
{
    while (n2 != 0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}
int main()
{
    int n, a, b, n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl;
    // int counter = 0, counter2 = 0;
    // for (int i = 0; i <= 1000; i++)
    // {
    //     if (i % 5 == 0)
    //     {
    //         counter++;
    //     }
    //     if (i % 7 == 0)
    //     {
    //         counter++;
    //     }
    //     if (i % 5 == 0 && i % 7 == 0)
    //     {
    //         counter2++;
    //     }
    // }
    // cout << counter - counter2 << endl;

    return 0;
}