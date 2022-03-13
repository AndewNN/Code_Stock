#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
struct A
{
    int ord, rk, id;
    bool operator < (const A& o) const {
        if (ord != o.ord)
            return ord > o.ord;
        if (rk != o.rk)
            return rk > o.rk;
    }
};
priority_queue<A> q;
int cou[20], ord[20];
int main() {
    int c, s, i, j, id, cl, o, k = 0;
    char od;
    scanf("%d %d", &c, &s);
    for (i = 0;i < s;i++) {
        scanf("%d %d", &cl, &id);
        mp[id] = cl;
    }
    c = 0;
    scanf(" %c", &od);
    while (od != 'X') {
        if (od == 'E') {
            scanf("%d", &id);
            if (cou[mp[id]] == 0)
                ord[mp[id]] = c++;
            cou[mp[id]]++;
            //printf("%d %d\n", cou[mp[id]], c - 1);
            q.push({ ord[mp[id]],k++,id });
        }
        if (od == 'D') {
            if (q.empty())
                printf("empty\n");
            else {
                printf("%d\n", q.top().id);
                cou[mp[q.top().id]]--;
                q.pop();
            }
        }
        scanf(" %c", &od);
    }
    printf("0");


}
/*

2 6
1 41
1 42
1 43
2 201
2 202
2 203

*/