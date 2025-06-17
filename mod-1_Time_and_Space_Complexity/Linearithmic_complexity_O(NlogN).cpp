#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 1st loop: Linear Complexity + 2nd loop: Logarithmic Complexity = Linearithmic
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j*=2) {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}