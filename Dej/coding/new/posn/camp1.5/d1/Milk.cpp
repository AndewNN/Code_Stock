/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
char a;
int findroot(int i){
if(p[i]==i) return i;
else return p[i] = findroot(p[i]);
}
int main()
{
int n,q,i,x,y;
scanf("%d %d",&n,&q);
for(i=1;i<=n;i++) p[i]=i;
while(q--){
    scanf(" %c %d %d",&a,&x,&y);
    if(a=='q'){
        if(findroot(x)==findroot(y))
            printf("yes\n");
        else
            printf("no\n");
    }
    else
        p[findroot(x)]=findroot(y);
}
    return 0;
}
