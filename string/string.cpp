#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // string str = "ApnaCollege";
    // string str;
    // cin >> str;
    // cout << str;
    // string str1(5, 'a');
    // getline(cin, str);

    // string s1 = "fam";
    // string s2 = "fam";
    // s1.append(s2);
    // s1 = s1 + s2;
    // cout<< s1 <<endl;
    // cout << s1.length() << endl;
    // s1.clear();
    // cout<< s1 <<endl;

    // str = "nincompoop";
    // // str.erase(3, 3);
    // // cout << str << endl;
    // // cout << str.find("poop") << endl;
    // // str2 = "lol";
    // str.insert(3, "laugh");
    // cout << str << endl;
    // cout << str.size() << endl;
    // cout << str.length() << endl;
    // cout << str.substr(6, 4) << endl;

    // str = "123";
    // int x = stoi(str);
    // cout << x + 2 << endl;
    // cout << to_string(x) + "2" << endl;

    // string str = "skjcsdvcsCHSKGSAjabcBjLKnsNpoaj";
    // // sort(s1.begin(), s1.end());
    // //convert to upper-case
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }
    // cout << str << endl;
    // // convert to lowercase
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] += 32;
    //     }
    // }
    // cout << str << endl;

    // transform(str.begin(), str.end(), str.begin(), ::toupper);
    // cout << str << endl;
    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    // cout << str << endl;

    // string s = "85679854112546";
    // sort(s.begin(), s.end(), greater<int>());
    // cout << s << endl;

    string s = "fajkasfkhslvnsadlfhsau";
    int freq[26];

    for (int i = 0; i < 26; i++)
        freq[i] = 0;

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxF << endl
         << ans << endl;
    return 0;
}