#include<bits/stdc++.h>
using namespace std;
int node[400],l[400],r[400];
void pre(int n){
    if(node[n]==0) return;
    printf("%d ",node[n]);
    if(l[n]!=0){
       pre(l[n]);
    }
    if(r[n]!=0){
       pre(r[n]);
    }
}
void pos(int n){
    if(node[n]==0) return;
    if(l[n]!=0){
       pos(l[n]);
    }
    if(r[n]!=0){
       pos(r[n]);
    }
    printf("%d ",node[n]);
}
void inf(int n){
    if(node[n]==0) return;
    if(l[n]!=0){
       inf(l[n]);
    }
    printf("%d ",node[n]);
    if(r[n]!=0){
       inf(r[n]);
    }
}
int main()
{
    int n,a,i,run;
    scanf("%d %d",&n,&node[0]);
    for(i=1;i<n;i++){
        scanf("%d",&a);
        run = 0;
        while(1){
            if(node[run]==0) break;
            if(a < node[run]){
                if(l[run]==0){
                    l[run]=i;
                    break;
                }else{
                    run = l[run];
                }
            }else{
                if(r[run]==0){
                    r[run]=i;
                    break;
                }else{
                    run = r[run];
                }
            }
        }
        node[i] = a;
    }
    pre(0);
    printf("\n");
    pos(0);
    printf("\n");
    inf(0);
    return 0;
}
