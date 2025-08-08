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
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}
