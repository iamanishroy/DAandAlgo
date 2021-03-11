#include <iostream>
using namespace std;

int main()
{

    // int a = 10;
    // int b = 20;
    // // int *aptr;
    // // aptr = &a;
    // cout << &a << endl;
    // a++;
    // cout << &a << endl;
    // cout << &b << endl;

    // int arr[] = {10, 20, 30};
    // cout << *(arr+2) << endl;

    int a = 10;
    int *p;
    p = &a;
    cout << *p << endl;
    int **q = &p;

    cout << *q << endl;
    cout << **q << endl;
}