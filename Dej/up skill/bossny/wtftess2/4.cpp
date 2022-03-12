#include<bits/stdc++.h>
using namespace std;
int a[300100],b[100100];
int main()
{
    int n,m,i,j,k=0,sum=0;
    scanf("%d %d",&n,&m);
    j = m;
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
        a[b[i]+100000]=1;
    }
    while(m>0){
        k++;
        for(i=0;i<n;i++){
            if(m<=0){
                break;
            }
            if(a[b[i]+100000+k]==0){
                m--;
                a[b[i]+100000+k]=2;
                sum+=k;
            }
            if(m<=0){
                break;
            }
            if(a[b[i]+100000-k]==0){
                sum+=k;
                m--;
                a[b[i]+100000-k]=2;
            }
        }
    }
    printf("%d\n",sum);
    for(i=1;i<=300000 && j>0;i++){
        if(a[i]==2){
            printf("%d ",i-200000);
            j--;
        }
    }
    return 0;
}
