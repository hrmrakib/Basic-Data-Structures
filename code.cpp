#include <bits/stdc++.h>
using namespace std;

int paildrome(int x)
{
    int n = x;
    int rev = 0;
    while (x)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev == n;
}

int main()
{
    int x = paildrome(123);
    cout << "OK" << x << endl;
    return 0;
}
