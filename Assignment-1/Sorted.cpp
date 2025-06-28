#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool is_sorted = true;
        for(int i = 0; i < n-1; i++) {
            if(a[i] > a[i+1]) {
                is_sorted = false;
                break;
            }
        }
        if(is_sorted){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}