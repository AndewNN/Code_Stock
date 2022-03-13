#include<bits/stdc++.h>
using namespace std;
vector<int> ans, now;
int a[3000];
int main() {
    int n, i, j, sum = 0, mx = 0;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
        scanf("%d", &a[i]);
    for (i = 0;i < n;i++) {
        sum += a[i];
        now.push_back(a[i]);
        if (sum > mx) {
            mx = sum;
            ans = now;
        }
        if (sum < 0) {
            now.clear();
            sum = 0;
        }
    }
    if (!ans.empty()) {
        for (auto x : ans)
            printf("%d ", x);
        printf("\n%d", mx);
    }
    else
        printf("Empty sequence");
}