#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            if (!pq.empty())
                cout << pq.top() << "\n";
            else
                cout << "Empty\n";
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
                cout << pq.top() << "\n";
            else
                cout << "Empty\n";
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top() << "\n";
                else
                    cout << "Empty\n";
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }
    return 0;
}
