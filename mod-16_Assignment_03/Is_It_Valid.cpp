#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string str;
        cin >> str;

        stack<char> s;
        
        for (char c : str)
        {
            if (!s.empty() && s.top() != c)
            {
                s.pop();
            }
            else
            {
                s.push(c);
            }
        }

        if (s.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
