/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include <bits/stdc++.h>
using namespace std;
int a[7] = {1, 5, 8, 10, 20, 25, 60};
vector<int> aa;
int main() {
    for (int i = 0; i < 7; i++)
        aa.push_back(a[i]);
    int c = 0;
    while (c >= 0) {
        cin >> c;
        // cout << *upper_bound(aa.begin(), aa.end(), c) << "\n";
        cout << *upper_bound(begin(a), end(a), c) << "\n";
    }
}
/*
14 13 17 15 15 14 15 28 18
17 11 9 13 16 18 15 14 16
7 16 11 12 19 27 14 12 19
*/
