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
    int a,ans=0;
    while(1){
    scanf("%d",&a);
    ans =0;
    while(a>0){
        if(a>=5){
            a-=5;
            ans++;
        }else if(a>=4){
            a-=4;
            ans++;
        }else{
            a--;
            ans++;
        }
    }
    printf("%d",ans);
    }
}
