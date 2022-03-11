#include<bits/stdc++.h>
using namespace std;
long long a,ch=1,an[11000];
int main()
{
    int i,j,cnt=0;
    scanf("%lld",&a);
    if(a<=9 && a > 0){
        printf("%d",a);
    }else if(a>=10){
        for(i=9;i>=2;i--){
            while(a%i==0){
                an[cnt]=i;
                a/=i;
                cnt++;
            }
        }
        if(a == 1){
            ch = 0;
        }
        if(ch){
            printf("-1\n");
        }else{
            for(i=cnt-1;i>=0;i--){
                printf("%d",an[i]);
            }
        }
    }else if(a==0){
        printf("10\n");
    }else{
        printf("-1");
    }
    return 0;
}
