#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        int n;
        cin >> n;
        cin.ignore();
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (auto it : s)
            cout << it << " ";

        cout << "\n";
    }
    return 0;
}
