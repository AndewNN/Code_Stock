/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<long long> h;
int main()
{
	long long q,n,m,k,num,opr,ans;
	long long sum;
	scanf("%lld",&q);
	while(q--){
        scanf("%lld %lld %lld",&n,&m,&k);
        sum=0;
        ans=0;
        while(n--){
            scanf("%lld",&num);
            h.push(-num);
        }
        while(m--){
            scanf("%lld",&opr);
            if(opr==1){
                scanf("%lld",&num);
                h.push(-num+sum);
            }
            else if(opr==2){
                sum+=k;
            }
            else if(opr==3){
                if(!h.empty())
                    h.pop();
            }
        }
        printf("%lld ",h.size());
        while(!h.empty()){
            ans += -h.top()+sum;
            h.pop();
        }
        printf("%lld\n",ans);
	}
    return 0;
}
