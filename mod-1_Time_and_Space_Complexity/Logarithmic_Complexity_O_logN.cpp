#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin  >> n;

    for(int i = n; i >= 1; i/=5) {
        cout << i << endl;
    }
    
    return 0;
}