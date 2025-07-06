#include <bits/stdc++.h>
using namespace std;

void fun(int* &p) {
    *p = 500;

    cout << *p << endl;
}

int main() {
    int x = 20;
    int *p = &x;
    fun(p);
    cout << *p << endl;
    return 0;
}