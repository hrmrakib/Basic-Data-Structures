#include <bits/stdc++.h>
using namespace std;

void delete_list(list<int> &l, int idx)
{
    if (idx < 0 || idx >= l.size())
    {
        return;
    }
    auto del = l.begin();
    advance(del, idx);
    l.erase(del);
}

void print_forward(list<int> &l)
{
    cout << "L -> ";
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void print_backward(list<int> &l)
{
    cout << "R -> ";
    for (auto it = l.rbegin(); it != l.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        if (x == 0)
        {
            l.push_front(y);
        }
        else if (x == 1)
        {
            l.push_back(y);
        }
        else if (x == 2)
        {
            delete_list(l, y);
        }

        print_forward(l);
        print_backward(l);
    }

    return 0;
}
