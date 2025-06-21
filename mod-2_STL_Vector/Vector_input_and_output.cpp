#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1: if have a size
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // 2: without size (dynamic vector)
    int x;
    cin >> x;
    vector<int>v2; 
    for(int i = 0; i < x; i++) {
        int a;
        cin >> a;
        v2.push_back(a);
    }

    return 0;
}