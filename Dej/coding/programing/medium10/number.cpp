/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[500100];
char b;
int st=1,ch=1,i,n,m,x,y;
int play(int x){
    if(ch){
        return (st+x-1)%n;
    }else{
        return (st+n-x+1)%n;
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    while(m--){
        scanf(" %c",&b);
        if(b=='a'){
            scanf("%d %d",&x,&y);;
            swap(play(x),play(y));
        }else if(b=='b'){
            scanf("%d %d",&x,&y);
            a[play(x)] = y;
        }else if(b=='c'){
            scanf("%d",&x);
            if(ch && st /)
        }else{
            scanf("%d",&x);
        }
    }
    return 0;
}
