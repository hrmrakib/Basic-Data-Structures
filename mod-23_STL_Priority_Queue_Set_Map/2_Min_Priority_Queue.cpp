#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout << "Min element: " << pq.top() << endl;
    pq.pop();
    cout << "Min element after pop: " << pq.top() << endl;
    return 0;
}
