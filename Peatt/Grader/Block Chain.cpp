/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
map<vector<pair<int,int>> , int> mp;
vector<pair<int,int>> g;
int main()
{
    int t,q,i,n,j,u,v;
    scanf("%d %d",&t,&q);
    t,q;
    while(t--){
        scanf("%d",&n);
        n--;
        while(n--){
            scanf("%d %d",&u,&v);
            g.push_back({u,v});
            g.push_back({v,u});
        }
        sort(g.begin(),g.end());
        mp[g]++;
        g.clear();
    }
    while(q--){
        scanf("%d",&n);
        n--;
        while(n--){
            scanf("%d %d",&u,&v);
            g.push_back({u,v});
            g.push_back({v,u});
        }
        sort(g.begin(),g.end());
        printf("%d\n",mp[g]);
        g.clear();
    }

    return 0;
}
/*

3 2
10
1 2
6 4
2 5
3 5
8 6
2 7
5 8
8 9
4 10
6
1 4
2 4
4 3
5 4
5 6
10
1 2
2 7
2 5
3 5
8 6
4 6
5 8
8 9
4 10
6
1 4
2 4
4 3
5 4
1 6
10
1 2
2 7
2 5
3 5
8 6
4 6
5 8
8 9
4 10


*/
