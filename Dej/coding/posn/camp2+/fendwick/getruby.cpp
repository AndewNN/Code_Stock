/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int fendwick[751000];
string a;
int main()
{
    int n,m,b,c,i,sum;
    scanf("%d %d",&n,&m);
    while(m--){
        cin>>a;
        if(a=="Bury"){
            scanf("%d %d",&b,&c);
            for(i=c;i<=n;i+=(i&-i))
                fendwick[i]+=b;
            }else{
                scanf("%d %d",&b,&c);
                for(sum=0,i=c;i>0;i-=(i&-i))
                    sum+=fendwick[i];
                for(i=b-1;i>0;i-=(i&-i))
                    sum-=fendwick[i];
                printf("%d\n",sum);
            }
    }
    return 0;
}
