#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> mp;
    mp[1] = "sakib";
    mp[2] = "rakib";
    mp[3] = "akib";

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    if (mp.count(4))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
