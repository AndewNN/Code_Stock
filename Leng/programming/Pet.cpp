#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,cou,ma=-1,idx;
    for(i=1;i<=5;i++){
        cou=0;
        for(j=0;j<4;j++){
            scanf("%d",&n);
            cou+=n;
        }
        if(cou>ma){
            ma=cou;
            idx=i;
        }
    }
    printf("%d %d",idx,ma);

}

