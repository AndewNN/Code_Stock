#include<bits/stdc++.h>
using namespace std;
char aa[3][20]={"Adrian","Bruno","Goran"},a[110],c[3][10]={"ABC","BABC","CCAABB"};
int ans[3],ma=-1,m[3]={3,4,6};
int main(){
    int n,i,j,cou;
    scanf("%d %s",&n,a);
    for(i=0;i<3;i++){
        cou=0;
        for(j=0;j<n;j++)
            if(a[j]==c[i][j%m[i]])
                cou++;
        ans[i]=cou;
        ma=max(ma,cou);
    }
    printf("%d\n",ma);
    for(i=0;i<3;i++)
        if(ans[i]==ma)
            printf("%s\n",aa[i]);




}
/*

5
BAACC

9
AAAABBBBB

*/
