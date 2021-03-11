#include <iostream>
using namespace std;
/************* FUNCTION OVERLOADING *****************************/
class ApnaCollege
{
public:
    void fun()
    {
        cout << "I am a function with no arguments" << endl;
    }
    void fun(int x)
    {
        cout << "I am a function with int arguments" << endl;
    }
    void fun(double x)
    {
        cout << "I am a function with double arguments" << endl;
    }
};
/**************************************************************************/
/****************** OPRTATOR OVERLOADING **********************************/
class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.img = img + obj.img;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout << real << " + i" << img << endl;
    }
};
/**************************************************************************/
int main()
{
    // ApnaCollege obj;
    // obj.fun();
    // obj.fun(62);
    // obj.fun(40.0);

    Complex c1(12, 7);
    Complex c2(6, 7);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}