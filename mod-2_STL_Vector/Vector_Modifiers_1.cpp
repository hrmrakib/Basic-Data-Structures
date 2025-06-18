#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2 = v;

    // for(int i = 0; i < v2.size(); i++) {
    //     cout << v2[i] << " ";
    // }

    vector<int> v3 = {1, 2, 3, 4, 5};
    // v3.push_back(6);
    // v3.push_back(7);
    // v3.pop_back();

    vector<int> v4 = {100, 200, 300};
    // v3.insert(v3.begin() + 2, 100);
    v3.insert(v3.begin() + 2, v4.begin(), v4.end());

    // v3.erase(v3.begin()+2);
    v3.erase(v3.begin() + 1, v3.begin() + 5);

    for(int x: v3) {
        cout << x << " ";
    }

    return 0;
}
