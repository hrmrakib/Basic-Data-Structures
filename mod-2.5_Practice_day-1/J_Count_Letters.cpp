#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<int> freq(26, 0);

    for(char c : s) {
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > 0){
            cout << char('a'+i) << " : " << freq[i] << endl;
        }
    }
    
    // cout << char('a'+2);

    return 0;
}