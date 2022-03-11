#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,ans=-1000000000,last=1,i,st=1,en,b,ans2=-1000000000,es,ch;
    scanf("%d",&n);
    ch = 1;
    for(i=1;i<=n;i++){
        scanf("%d",&b);
        if(b >= 0){ ch = 0;}
        if(b > ans2){ ans2 = b,es = i;}
        sum += b;
        if(sum>=0){
            if(sum > ans){
                ans = sum;
                st = last;
                en = i;
            }
        }else{
            sum = 0;
            last = i+1;
        }
    }
    if(ch){
        printf("%d %d\n%d",es,es,ans2);
    }else{
    printf("%d %d\n%d",st,en,ans);
    }
    return 0;
}
