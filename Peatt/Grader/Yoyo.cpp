/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int fw[750000];
string o;
int main()
{
    int i,n,m,a,b,c,sum;
    scanf("%d %d",&n,&m);
    while(m--){
        cin >> o;
        if(o=="Yoyo"){
            scanf("%d %d %d",&a,&b,&c);
            if(b>c)
                swap(b,c);
            for(i=b;i<=n;i+=i&(-i))
                fw[i]+=a;
            for(i=c+1;i<=n;i+=i&(-i))
                fw[i]-=a;
        }
        if(o=="Ask"){
            sum=0;
            scanf("%d",&a);
            for(i=a;i>0;i-=i&(-i))
                sum+=fw[i];
            printf("%d\n",sum);
        }
    }

    return 0;
}
/*

7 6
Yoyo 10 4 7
Yoyo 10 1 5
Ask 4
Yoyo 5 3 6
Ask 5
Ask 7

*/
