#include <iostream>
using namespace std;

void subseq2(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    subseq2(s.substr(1), ans);
    subseq2(s.substr(1), ans + s[0]);
    subseq2(s.substr(1), ans + s[0] + to_string((int)s[0]));
}
int main()
{
    subseq2("AB", "");

    return 0;
}