/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int fendwick[500100];
string opr;
int main()
{
    int n,m,a,b,c,i;
    scanf("%d %d",&n,&m);
    while(m--){
        cin>>opr;
        if(opr=="Yoyo"){
            scanf("%d %d %d",&a,&b,&c);
            if(b>c) swap(b,c);
            for(i=b;i<=n;i+=(i&-i))
                fendwick[i]+=a;
            for(i=c+1;i<=n;i+=(i&-i))
                fendwick[i]-=a;
            }else{
                scanf("%d",&a);
                for(i=a,b=0;i>0;i-=(i&-i))
                    b+=fendwick[i];
                printf("%d\n",b);
            }
    }
    return 0;
}
