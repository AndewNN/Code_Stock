#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,cou;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&c);
        cou = 0;
        if(a == 0){
            cou++;
        }
        if(b == 0){
            cou++;
        }
        if(c == 0){
            cou++;
        }
        if(cou==0){
             printf("YES\n");
        }else if(cou == 1){
            if((a>=1 && c==1) || (b >=1 && a==1) || (c>=1 && b == 1)){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            if(a == 1 || b == 1 || c == 1){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
