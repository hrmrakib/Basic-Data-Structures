#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int mid = n / 2;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                
            }
        }
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int mid = n / 2;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i < mid) {
//                 // Upper half
//                 if (j == i)
//                     cout << "\\";
//                 else if (j == n - i - 1)
//                     cout << "/";
//                 else
//                     cout << " ";
//             } else if (i == mid) {
//                 // Middle line
//                 if (j == mid)
//                     cout << "X";
//                 else
//                     cout << " ";
//             } else {
//                 // Lower half
//                 if (j == n - i - 1)
//                     cout << "/";
//                 else if (j == i)
//                     cout << "\\";
//                 else
//                     cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
