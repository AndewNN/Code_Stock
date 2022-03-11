#include<bits/stdc++.h>
using namespace std;
int tree[1<<21];
char a[10];
void pre(int n){
    if(tree[n]==0) return;
    printf("%d\n",tree[n]);
    pre(n*2);
    pre(n*2+1);
}
void pos(int n){
    if(tree[n]==0) return;
    pos(n*2);
    pos(n*2+1);
    printf("%d\n",tree[n]);
}
void inf(int n){
    if(tree[n]==0) return;
    inf(n*2);
    printf("%d\n",tree[n]);
    inf(n*2+1);
}
void bfs(){
    int k;
    for(k=1;k<=1<<21;k++){
        if(tree[k]!=0){
            printf("%d\n",tree[k]);
        }
    }
}
int main()
{
    int n,i,run=1,b;
    scanf(" %s %d",a,&n);
    for(i=0;i<n;i++){
        scanf("%d",&b);
        run = 1;
        while(1){
            if(tree[run]==0) break;
            if(b < tree[run]) run = run*2;
            else   run = run*2+1;
        }
        tree[run] = b;
    }
    if(!strcmp(a,"PRE")) pre(1);
	if(!strcmp(a,"POS")) pos(1);
	if(!strcmp(a,"INF")) inf(1);
	if(!strcmp(a,"BFS")) bfs();
    return 0;
}
