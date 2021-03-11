#include <iostream>
using namespace std;

int main()
{

    int n = 8918;
    int rev = 0;
    while (n > 0)
    {
        
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    cout << rev << endl;

    return 0;
}