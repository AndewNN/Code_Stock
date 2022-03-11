/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long qs[6000100];
deque<pair<long long,long long>> deq;
int main()
{
    long long i,j,n,w,now,ma=0,l=0;
    scanf("%lld %lld",&n,&w);
    for(i=1;i<=n;i++){
        scanf("%lld",&now);
        qs[i]=qs[i-1]+now;
    }
    deq.push_back({0,0});
    for(i=1;i<=n;i++)
    {
        if(!deq.empty()){
            while(!deq.empty()&&deq.back().second>qs[i])  deq.pop_back();
            deq.push_back({i,qs[i]});
            while(!deq.empty()&&deq.front().first<i-w)    deq.pop_front();
            if(deq.back().second-deq.front().second>ma){
                ma=deq.back().second-deq.front().second;
                l=deq.back().first-deq.front().first;
            }
            if(deq.back().second-deq.front().second==ma)
                l=min(l,deq.back().first-deq.front().first);
        }
    }
    printf("%lld\n%lld",ma,l);
    return 0;
}
/*

7 4
3
2
5
1
4
-7
10

*/
