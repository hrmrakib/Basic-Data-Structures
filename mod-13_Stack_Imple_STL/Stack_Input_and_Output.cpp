#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        if (!v.empty())
        {
            v.pop_back();
        }
    }
    int top()
    {
        if (!v.empty())
        {
            return v.back();
        }
        return -1;
    }
    bool empty()
    {
        return v.empty();
    }
    int size()
    {
        return v.size();
    }
};

int main()
{
    myStack s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
