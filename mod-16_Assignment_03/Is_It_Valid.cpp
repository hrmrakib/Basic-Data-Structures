#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<string> s;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        for (char c : str)
        {
            cout << c << " ";
        }
    }

    // cout << s.top() << endl;
    return 0;
}
