#include<bits/stdc++.h>
using namespace std;
char a[100100],ans[100100];
int b[10],c[10],ct[10];
int main()
{
    int q,i,j,len,cou;
    scanf("%d",&q);
    while(q--){
        cou = 0;
        scanf("%d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&len);
        scanf(" %s",a);
        for(i=0;i<len;i++){
            c[a[i]-'0'-1]++;
        }
        for(i=0;i<len;i++){
            for(j=0;j<4;j++){
                if(b[j]>0 && j!=a[i]-'0'-1){
                    c[a[i]-'0'-1]--;
                    b[j]--;
                    ct[0] = b[2]+b[3]+b[1];
                    ct[1] = b[0]+b[3]+b[2];
                    ct[2] = b[1]+b[0]+b[3];
                    ct[3] = b[2]+b[0]+b[1];
                    if(ct[0] >= c[0] && ct[1] >= c[1] && ct[2] >= c[2]&& ct[3] >= c[3]){
                        ans[cou] = 1+j+'0';
                        cou++;
                        break;
                    }
                    c[a[i]-'0'-1]++;
                    b[j]++;
                }
            }
        }
        printf("%s\n",ans);
        for(i=0;i<len;i++){
            ans[i] = ' ';
        }
    }
    return 0;
}
