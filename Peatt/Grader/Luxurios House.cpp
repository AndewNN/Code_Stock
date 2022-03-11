/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
priority_queue<int> hp;
int main()
{
    int n,i,d,w,cou=0;
    long long ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&d,&w);
        g[d].push_back(w);
    }
    for(i=100000;i>=1;i--){
        if(g[i].size()){
            for(auto x:g[i])
                hp.push(x);
        }
        if(!hp.empty()){
            ans+=hp.top(),cou++;;
            hp.pop();
        }
    }
    printf("%lld\n%d",ans,cou);
    return 0;
}
/*

4
1 17
5 15
2 10
2 11

*/
