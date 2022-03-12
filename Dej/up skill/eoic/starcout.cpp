#include<bits/stdc++.h>
using namespace std;
int node[300100],p[300100],no[300100];
int fin(int a){
    if(p[a] == a) return a;
    else         return p[a] = fin(p[a]);
}
int main()
{
    int n,i,q,a,b,opr,ch,sum,x,y,cou=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&node[i]);
        p[i] = i;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        x = fin(a),y = fin(b);
        node[y]+=node[x];
        p[x] = y;
    }
    for(i=0;i<n;i++){
        if(p[i]==i){
            no[cou] = node[i];
            cou++;
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&opr);
        if(opr == 1){
            scanf("%d",&a);
            for(i=0,ch=1;i<cou;i++){
                if(no[i]==a){
                    ch = 0;
                }
            }
            if(ch){
                printf("MAIMEE\n");
            }else{
                printf("MEENA\n");
            }
        }else if(opr == 2){
            scanf("%d",&a);
            for(i=0,sum=0;i<cou;i++){
                if(no[i]==a){
                    sum++;
                }
            }
            printf("%d\n",sum);
        }else{
            scanf("%d %d",&a,&b);
            for(i=0,sum=0;i<cou;i++){
                if(no[i]>=a && no[i]<=b){
                    sum++;
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
