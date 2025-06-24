#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        int x = v[i] + 1;

        for(int j = 0; j < n; j++){
            if(x == v[j]){
                count++;
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
}