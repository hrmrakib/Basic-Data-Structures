#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string val;
        getline(cin, val);

        stringstream ss(val);
        int n;
        string str;
        ss >> n >> str;

        queue<char> q;

        if (n == 1)
        {
            if (!q.empty())
            {
                cout << q.front();
                q.pop();
            }
            else
            {
                cout << "Invalid";
            }
        }
        else if (n == 0)
        {
            q.push(str[0]);
        }
    }

    return 0;
}
