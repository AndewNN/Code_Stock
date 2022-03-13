#include<bits/stdc++.h>
using namespace std;
char b[1100];
vector<int> ans;
int main() {
    int q, i, k;
    scanf("%d", &q);
    while (q--) {
        scanf(" %s", b);
        int a[10] = { 1,2,3,5,4,6 };
        for (i = 0;i < strlen(b);i++) {
            if (b[i] == 'F')    swap(a[0], a[1]), swap(a[0], a[5]), swap(a[0], a[3]);
            if (b[i] == 'B')    swap(a[0], a[3]), swap(a[0], a[5]), swap(a[0], a[1]);
            if (b[i] == 'L')    swap(a[0], a[2]), swap(a[0], a[5]), swap(a[0], a[4]);
            if (b[i] == 'R')    swap(a[0], a[4]), swap(a[0], a[5]), swap(a[0], a[2]);
            if (b[i] == 'C')    swap(a[1], a[2]), swap(a[1], a[3]), swap(a[1], a[4]);
            if (b[i] == 'D')    swap(a[1], a[4]), swap(a[1], a[3]), swap(a[1], a[2]);
        }
        ans.push_back(a[1]);
    }
    for (auto x : ans)
        printf("%d ", x);
}