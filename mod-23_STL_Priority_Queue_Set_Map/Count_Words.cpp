#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    map<string, int> mp;
    stringstream ss(str);
    string word;
    while (ss >> word)
    {
        mp[word]++;
    }

    // mp.erase("the");
    // mp.erase("a");

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
