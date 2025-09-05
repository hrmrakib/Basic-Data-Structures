#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        map<string, int> mp;

        string str;
        getline(cin, str);

        stringstream ss(str);
        string word;

        string maxWord;
        int maxCount = 0;

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                maxWord = word;
            }
        }
        cout << maxWord << " " << maxCount << "\n";
    }

    return 0;
}
