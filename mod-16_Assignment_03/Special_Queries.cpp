#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    cin.ignore();

    queue<string> q;

    while (tc--)
    {
        int n;
        string str;
        cin >> n;
        if (n == 0)
        {
            cin >> str;
            q.push(str);
        }

        if (n == 1)
        {
            if (q.empty())
            {
                cout << "Invalid\n";
            }
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
    }

    return 0;
}
