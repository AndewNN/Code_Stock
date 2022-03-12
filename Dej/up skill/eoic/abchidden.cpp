#include<bits/stdc++.h>
using namespace std;
char a[10001000];
long long mk[10001000];
int main()
{
    long long q,len,i,sum;
    scanf("%lld",&q);
    while(q--){
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i]=='A'){
                mk[i]=1;
            }
        }
        sum = 0;
        for(i=0;i<len;i++){
            sum += mk[i];
            if(a[i]=='A'){
                mk[i]=0;
            }else if(a[i]=='B'){
                mk[i]=sum;
            }
        }
        sum = 0;
        for(i=0;i<len;i++){
            sum += mk[i];
            if(a[i]=='B'){
                mk[i]=0;
            }else if(a[i]=='C'){
                mk[i]=sum;
            }
        }
        for(i=0,sum=0;i<len;i++){
            sum += mk[i];
        }
        printf("%lld\n",sum);
        memset(mk,0,sizeof mk);
    }
    return 0;
}
