#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 20, 40};
    list <int> l2 = {100, 200};
    vector<int> v = {2, 4, 6};

    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.push_back(40);
    // l.push_front(50); 

    // l.insert(next(l.begin(), 2), v.begin(), v.end());
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    // cout << *next(l.begin(), 1) << endl;

    // replace(l.begin(), l.end(), 20, 100);

    auto it = find(l.begin(), l.end(), 20);
    if(it == l.end()){
        cout << "Not Found" << endl;
    }else{
        cout << "Found" << endl;
    }

    for(int val : l) {
        cout << val << endl;
    }


    return 0;
}