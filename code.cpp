#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    while (true)
    {
        string web;
        cin >> web;
        if (web == "end")
        {
            break;
        }
        l.push_back(web);
    }

    for (auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}
