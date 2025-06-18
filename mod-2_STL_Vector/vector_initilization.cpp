#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1:
    // vector<int> v;
    // 2:
    // vector<int> v(10);
    // 3:
    vector<int> v(10, -1);
    // 4:
    // vector <int>v2(v);

    // 5: copy from an array
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v3(a, a + 5);
    // 6:
    vector<int> vec = {1, 2, 3, 4, 5};

    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}