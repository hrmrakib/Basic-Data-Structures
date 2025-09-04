#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // max heap
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout << "Max element: " << pq.top() << endl;
    pq.pop();
    cout << "Max element after pop: " << pq.top() << endl;
    return 0;
}
