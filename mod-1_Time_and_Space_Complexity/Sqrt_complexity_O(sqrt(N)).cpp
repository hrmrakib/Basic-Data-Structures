#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 1:
    // for(int i = 1; i <= sqrt(n); i++){
    //     cout << n / i << endl;
    //     // cout << n / i << endl;
    // }

    // 2:
    for(int i = 1; i<= n; i++) {
        if(n % i == 0) {
            cout << i << endl; 
        }
    }

    // 3:
    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            cout << i << endl; 
        }
    }

    return 0;
}