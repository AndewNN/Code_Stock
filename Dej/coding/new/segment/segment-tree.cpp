#include<bits/stdc++.h>
using namespace std;
int a[400100];
void update(int l,int r,int x,int y,int idx){
    if(l>x||r<x) return ;
    if(l==r){
        a[idx] = y; return ;
    }
    int mid = (l+r)>>1;
    update(l,mid,x,y,idx*2),update(mid+1,r,x,y,idx*2+1);
    a[idx] = max(a[idx*2],a[idx*2+1]);
}
int querry(int l,int r,int x,int y,int idx){
    if(l>y||r<x) return -1<<30;
    if(l>=x && r<=y) return a[idx];
    int mid=(l+r)>>1;
    return max(querry(l,mid,x,y,idx*2),querry(mid+1,r,x,y,idx*2+1));
}
int main()
{
    int n,q,x,y;
    char b;
    scanf("%d %d",&n,&q);
    while(q--){
        scanf(" %c %d %d",&b,&x,&y);
        if(b=='U'){
            update(1,n,x,y,1);
        }else{
            printf("%d\n",querry(1,n,x,y,1));
        }
    }
    return 0;
}
