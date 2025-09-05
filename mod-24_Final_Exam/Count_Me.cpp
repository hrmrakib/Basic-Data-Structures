#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    map<string, int> mp;

    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;
    while (ss >> word)
    {
        mp[word]++;
    }

    // for (int i = 0; i < n; i++)
    // {

    // }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
