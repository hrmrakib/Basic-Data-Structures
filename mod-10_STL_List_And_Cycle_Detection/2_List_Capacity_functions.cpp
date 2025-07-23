#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l(10, 3);
    // cout << *l.begin() << endl;

    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << *it << endl;
    // }

    // most use
    // for(int val : l) {
    //     cout << val << endl;
    // }

    vector<int> v = {10, 20, 30, 40, 50};

    list<int> list1 = {1,2,3,3,4,6};
    list<int> list2(list1);
    list<int> list3(v);

    list2.clear();

    list1.resize(8, 200);

    // for(int val : list2) {
    //     cout << val << endl;
    // }

    return 0;
}