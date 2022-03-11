#include<bits/stdc++.h>
using namespace std;
struct A{
    int st,lv,ma,id;
    bool operator < (const A& o) const{
        if(st != o.st) return st < o.st;
        else    return id < o.id;
    }
};
priority_queue<A> hp;
int mk[1000100][4];
int main()
{
    char opr;
    int n,l,r,i,a,b;
    scanf("%d %d %d",&n,&l,&r);
    l += r;
    for(i=1;i<=n;i++){
        hp.push({0,0,0,i});
    }
    for(i=0;i<l;i++){
        scanf(" %c",&opr);
        if(opr == 'L'){
            scanf("%d %d",&a,&b);
            mk[b][0]++; // like&comment
            mk[b][1]++;  // lv
            mk[b][2]++; // member
            hp.push({mk[b][0],mk[b][1],mk[b][2],b});
        }else if(opr == 'C'){
            scanf("%d %d",&a,&b);
            mk[b][0]+=3; // like&comment
            mk[b][1]++;  // lv
            mk[b][2]++; // member
            hp.push({mk[b][0],mk[b][1],mk[b][2],b});
        }else if(opr == 'R'){
            while(!hp.empty()){
                if(hp.top().lv != mk[hp.top().id][1] || mk[hp.top().id][3]==1){
                    hp.pop();
                }else{
                    break;
                }
            }
            if(!hp.empty()){
                printf("%d\n",hp.top().id);
            }
        }else if(opr == 'D'){
            while(!hp.empty()){
                if(hp.top().lv != mk[hp.top().id][1] || mk[hp.top().id][3]==1){
                    hp.pop();
                }else{
                    break;
                }
            }
            mk[hp.top().id][3]=1;
            hp.pop();
        }
    }
    return 0;
}
