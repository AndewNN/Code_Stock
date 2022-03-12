/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int sta[1010];
vector<int> g[1010];
int main()
{
    int q,a,b;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
    }
    return 0;
}
