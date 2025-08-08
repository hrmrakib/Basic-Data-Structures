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

    int tc;
    cin >> tc;
    cin.ignore();

    auto curr = l.begin();

    while (tc--)
    {
        string str;
        getline(cin, str);

        stringstream ss(str);
        string s1, s2;
        ss >> s1;
        ss >> s2;

        if (s1 == "visit")
        {
            auto it = find(l.begin(), l.end(), s2);
            if (it != l.end())
            {
                curr = it;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s1 == "prev")
        {
            if (curr != l.begin())
            {
                curr--;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s1 == "next")
        {
            if (curr != l.end() && next(curr) != l.end())
            {
                curr++;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
