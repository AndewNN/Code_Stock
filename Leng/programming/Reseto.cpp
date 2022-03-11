#include<bits/stdc++.h>
using namespace std;
int ma[1010];
int main(){
    int n,k,i,j,cou=0;
    scanf("%d %d",&n,&k);
    for(i=2;i<=n;i++){
        if(!ma[i]){
            for(j=i;j<=n;j+=i){
                if(!ma[j])
                    ma[j]=1,cou++;
                if(cou==k){
                    printf("%d\n",j);
                    return 0;
                }
            }
        }
    }
}

