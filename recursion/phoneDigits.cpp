#include <iostream>
using namespace std;
string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void phoneDigits(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch - '0'];
    for (int i = 0; i < code.length(); i++)
    {
        phoneDigits(s.substr(1), ans + code[i]);
    }
}

int main()
{
    phoneDigits("259", "");
    return 0;
}