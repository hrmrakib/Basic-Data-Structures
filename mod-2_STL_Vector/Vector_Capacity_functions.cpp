#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << v.size() << endl;
    cout << v.max_size() << endl;
    cout << v.capacity() << endl;

    v.clear(); // not delete elements, just do size: 0
    cout << v[2] << endl;

    cout << v.empty() << endl;

    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    return 0;
}
