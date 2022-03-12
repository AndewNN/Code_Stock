/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,ans=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        c = 10+100*(b-1);
        if(b==1){
            printf("%d\n",(a-100)/10);
        }else if(a-((a/c)*c)<=100){
        printf("%d\n",a/c);
        }else{
        printf("%d\n",a/c+1);
        }
    }
    return 0;
}
