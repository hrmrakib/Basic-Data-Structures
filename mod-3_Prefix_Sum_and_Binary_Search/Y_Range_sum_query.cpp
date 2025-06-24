#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int>v(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<int>pre(n+1);
    pre[1] = v[1];
    for(int i = 2; i <= n; i++) {
        pre[i] = pre[i - 1] + v[i];
    }

    for(int i = 1; i <= n; i++) {
        cout << pre[i] << " ";   
    }

    while(q--) {
        int l, r;
        cin >> l >> r;
        int sum = 0;

        if(l==1){
            sum = pre[r];
        }else{
            sum = pre[r] - pre[l - 1];
        }

        // TLE:
        // for(int i = l; i <= r; i++) {
        //     sum += v[i];
        // }
        // cout << sum << endl;
    }

    return 0;
}