// Floyd's Algorithm
// Hare and Tortoise Algorithm
/*
    Distance moved by fast ptr = m + n + l * j
    Distance moved by slow ptr = m + n + l * i

    Distance moved by fast ptr = 2 * Distance moved by slow ptr

    =>  m + n + l * j = 2 * ( m + l * i)
    =>          m + n = l * ( j - 2 * i ) 
    =>              m = l * ( j - 2 * i ) - n
*/
#include <iostream>
using namespace std;

int main()
{

    return 0;
}