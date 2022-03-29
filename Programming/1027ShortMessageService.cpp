#include<bits/stdc++.h>
using namespace std;
char s[10100];
int a[10];
priority_queue<pair<int, char > > hp;
int main() {
    int i, now, mi, c, idx, out = 0;
    scanf(" %s", s);
    while (s[0] != '!') {
        for (i = 0;i < strlen(s);i++) {
            now = s[i] - 'A';
            if (a[now] != -1)   a[now]++;
        }
        for (i = 0, mi = 1e9;i < 7;i++) {
            if (a[i] == -1)          continue;
            if (a[i] < mi)          mi = a[i], c = 1, idx = i;
            else if (a[i] == mi)    c++;
        }
        if (c == 1 && out < 6)  a[idx] = -1, out++;
        scanf(" %s", s);
    }
    for (i = 0;i < 7;i++)
        if (a[i] != -1)
            hp.push(make_pair(a[i], 'A' + 25 - i));
    printf("%d\n", 7 - out);
    while (!hp.empty()) {
        printf("%c %d\n", 'A' + 'Z' - hp.top().second, hp.top().first);
        hp.pop();
    }
}