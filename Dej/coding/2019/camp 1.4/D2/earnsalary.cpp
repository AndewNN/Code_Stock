#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int a[100100];
void p(int z){
    for(auto x : g[z]){
        a[x]+=a[z];
        p(x);
    }
}
int main()
{
    int n,m,i,j,b;
    scanf("%d %d",&n,&m);
    for(i=0;i<n-1;i++){
        scanf("%d %d",&j,&b);
        g[b].push_back(j);
    }
    while(m--){
        scanf("%d %d",&i,&j);
        a[i]+=j;
    }
    p(1);
    for(i=1;i<=n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
/*
10 10
5 1
4 2
2 6
8 7
9 3
3 2
6 5
7 6
10 1
9 9
1 1
9 6
1 2
9 8
1 2
4 7
2 9
6 7
2 4 */
