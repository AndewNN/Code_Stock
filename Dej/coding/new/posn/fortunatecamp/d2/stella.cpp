/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long mp,st,hl,type;
    bool operator < (const A&o)const{
        if(mp!=o.mp) return mp < o.mp;
        return st > o.st;
    }
};
priority_queue< A > h;
A temp;
int main()
{
	long long n,k,ans1=0,ans2=0,i,j,mp,hl;
	char opr,opr2;
	scanf("%lld",&n);
	for(i=1;i<=n;i++){
	scanf(" %c",&opr);
	if(opr=='c'){
        scanf(" %c",&opr2);
        if(opr2=='n'){
            scanf("%lld",&mp);
            h.push({mp,i,0,1});
        }
        if(opr2=='r'){
            scanf("%lld %lld",&mp,&hl);
            h.push({mp,i,hl,2});
        }
	}
	else if(opr=='u'){
        while(1){
            if(h.empty()) break;
            temp = h.top(); h.pop();
            if(temp.type==1){
                ans1+=temp.mp; break;
            }
            else if(temp.type==2){
                long long cnt=(i-temp.st)/temp.hl;
                if(cnt==0){
                    ans1+=temp.mp; break;
                }
                for(j=0;j<cnt;j++){
                    temp.mp/=2;
                }
                if(temp.mp>0){
                    temp.st += cnt*temp.hl;
                    h.push(temp);
                }
            }
        }
	}
}
	while(!h.empty()){
        temp = h.top(); h.pop();
        if(temp.type==1) ans2++;
        else{
            long long cnt = (n-temp.st)/temp.hl;
            for(j=0;j<cnt;j++){
                temp.mp/=2;
            }
            if(temp.mp!=0) ans2++;
        }
	}
	printf("%lld %lld",ans1,ans2);
    return 0;
}
