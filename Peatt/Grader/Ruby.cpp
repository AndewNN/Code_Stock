/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int fw[760000];
string c;
int main()
{
    int i,n,m,a,b,sum;
    scanf("%d %d",&n,&m);
    while(m--){
        cin >> c;
        if(c=="Bury"){
            scanf("%d %d",&a,&b);
            for(i=b;i<=n;i+=i&(-i))
                fw[i]+=a;
        }
        if(c=="Find"){
            sum=0;
            scanf("%d %d",&a,&b);
            for(i=b;i>0;i-=i&(-i))
                sum+=fw[i];
            for(i=a-1;i>0;i-=i&(-i))
                sum-=fw[i];
            printf("%d\n",sum);
        }
    }

    return 0;
}
/*

10 5
Bury 5 5
Bury 10 7
Find 3 7
Bury 20 8
Find 6 10

*/
