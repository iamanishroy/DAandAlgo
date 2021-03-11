#include <iostream>
using namespace std;

int main()
{
    // char arr[100] = "apple";
    // int i = 0;
    // while (arr[i] != '\0')
    // {

    //     cout << arr[i] << endl;
    //     i++;
    // }
    // check palindrome

    int n;
    cin >> n;

    char arr[n + 1];
    cin.ignore();
    cin.getline(arr, n);
    cin.ignore();

    // bool check = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != arr[n - 1 - i])
    //     {
    //         check = 0;
    //         break;
    //     }
    // }

    // if (check == true)
    // {
    //     cout << "palindrome" << endl;
    // }
    // else
    // {
    //     cout << "not-a-palindrome" << endl;
    // }

    // find largest word
    int maxLen = 0, len = 0, wordStart, prev = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ' ')
        {
            if (maxLen < len)
            {
                maxLen = len;
                wordStart = prev;
            }
            len = 0;
            prev = i + 1;
        }
        else
        {
            len++;
        }
    }
    if (maxLen < len)
    {
        maxLen = len;
        wordStart = prev;
    }
    cout << "max-Length -> " << maxLen << endl;
    cout << "word -> ";
    for (i = wordStart; i <= wordStart + maxLen; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}