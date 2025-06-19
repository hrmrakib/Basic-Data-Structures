#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};

    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << v.front() << endl; // or, simple: v[0]
    cout << v.back() << endl;

    return 0;
}
