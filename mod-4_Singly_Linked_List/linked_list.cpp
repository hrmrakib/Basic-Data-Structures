#include <bits/stdc++.h>
using namespace std;
#include<cstdint>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    cout << (uintptr_t)&a[2] << " " << (uintptr_t)&a[3];
    return 0;
}