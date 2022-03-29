#include<bits/stdc++.h>
using namespace std;
priority_queue<int > hp;
int main() {
    int n, i;
    char o;
    scanf("%d", &n);
    while (n--) {
        scanf(" %c", &o);
        if (o == 'Q') {
            if (!hp.empty()) {
                printf("%d\n", hp.top());
                hp.pop();
            }
            else
                printf("-1\n");
        }
        else {
            scanf("%d", &i);
            hp.push(i);
        }
    }

}