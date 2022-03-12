/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    double M[251][251];
};
int n;
A tmp;
void multiply(A *a,A *b){
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            tmp.M[i][j]=0;
            for(k=1;k<=n;k++){
                tmp.M[i][j]+=a->M[i][k]*b->M[k][j];
            }
        }
    }
}
A dp[20],ans,mat;
int main()
{
    int t,i,j;
    scanf(" %d %d",&n,&t);
    for(i=1;i<=n;i++)   scanf("%lf",&ans.M[i][1]);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%lf",&dp[0].M[j][i]);
        }
    }
    for(i=1;i<20;i++){
        multiply(&dp[i-1],&dp[i-1]);
        dp[i]=tmp;
    }
    for(i=1;i<=n;i++) mat.M[i][i]=1;
    for(i=0;i<20;i++){
        if(t&(1ll<<i)){
            multiply(&mat,&dp[i]);
            mat=tmp;
        }
    }
    multiply(&mat,&ans);
    ans = tmp;
    for(i=1;i<=n;i++) printf("%.2lf\n",ans.M[i][1]);
    return 0;
}
