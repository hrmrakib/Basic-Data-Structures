#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, o;
    cin >> n >> m >> o;

    // O(n*m*o)
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            for(int k = 1; k <= o; k++){
                cout << i << " " << j << " " << k << endl;
            }
        }
    }

    return 0;
}