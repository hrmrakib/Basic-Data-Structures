#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int x)
    {
        l.push_back(x);
    }

    void pop()
    {
        if (!l.empty())
        {
            l.pop_back();
        }
    }

    int top()
    {
        if (!l.empty())
        {
            return l.back();
        }
        return -1;
    }

    bool empty()
    {
        return l.empty();
    }

    int size()
    {
        return l.size();
    }
};

class myQuque
{
public:
    list<int> l;

    void push(int x)
    {
        l.push_back(x);
    }

    void pop()
    {
        if (!l.empty())
        {
            l.pop_front();
        }
    }

    int front()
    {
        if (!l.empty())
        {
            return l.front();
        }
        return -1;
    }

    int back()
    {
        if (!l.empty())
        {
            return l.back();
        }
        return -1;
    }

    bool empty()
    {
        return l.empty();
    }

    int size()
    {
        return l.size();
    }
};

int main()
{
    myStack s;
    myQuque q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;
    while (!s.empty() && !q.empty())
    {
        if (s.top() == q.front() && s.size() == q.size())
        {
            flag = true;
            s.pop();
            q.pop();
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
