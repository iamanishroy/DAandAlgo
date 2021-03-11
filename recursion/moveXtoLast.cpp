#include <iostream>
using namespace std;

string moveXtoLase(string str)
{
    return str.length() == 0 ? "" : str[0] == 'x' ? moveXtoLase(str.substr(1)) + str[0] : str[0] + moveXtoLase(str.substr(1));
}
int main()
{
    cout << moveXtoLase("acxanxpxajxxzapocnas") << endl;
    return 0;
}