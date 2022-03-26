#include<bits/stdc++.h>
using namespace std;
struct A {
    int st, ed, h;
    bool operator <(const A& o)const {
        if (h != o.h)
            return h < o.h;
    }
};
struct B {
    int st, ed, h;
    bool operator <(const B& o)const {
        if (st != o.h)
            return st > o.st;
    }
};
vector<B> v[3000];
priority_queue<int> stt;
priority_queue<A> hp;
int main() {
    int n, st, ed, h, i, t, l = -1;
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        scanf("%d %d %d", &st, &h, &ed);
        stt.push(st * -1);
        stt.push(ed * -1);
        v->push_back({ st,ed,h });
    }
    sort(v->begin(), v->end());
    while (!stt.empty())
    {
        t = stt.top() * -1;
        stt.pop();
        while (!stt.empty() && t == stt.top())  stt.pop();
        while (!v->empty() && t >= v->back().st) {
            B tt = v->back();
            hp.push({ tt.st,tt.ed,tt.h });
            v->pop_back();
        }
        while (!hp.empty() && hp.top().ed <= t)  hp.pop();
        if (!hp.empty() && hp.top().h != l) {
            printf("%d %d ", t, hp.top().h);
            l = hp.top().h;
        }
        else if (hp.empty() && l != 0) {
            printf("%d 0 ", t);
            l = 0;
        }
    }
}
/*

2
1 11 5
2 6 7

*/