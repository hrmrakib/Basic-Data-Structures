#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    string name;
    int id;

    Pair(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
};

class comapre
{
public:
    bool operator()(Pair p1, Pair p2)
    {
        if (p1.name == p2.name)
        {
            return p1.id < p2.id;
        }
        return p1.name > p2.name;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Pair, vector<Pair>, comapre> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int id;
        cin >> name >> id;
        Pair p(name, id);
        pq.push(p);
    }

    while (!pq.empty())
    {
        Pair top = pq.top();
        cout << top.name << " " << top.id << endl;
        pq.pop();
    }

    return 0;
}
