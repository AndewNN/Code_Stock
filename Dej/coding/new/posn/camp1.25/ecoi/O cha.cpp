/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10],b[10],c[10],n;
void permu(int state){
    int i;
    if(state==n){
        for(i=0;i<n;i++){
            printf("%d",b[i]);
        }
        printf("\n");
        return ;
    }
    for(i=1;i<=n;i++){
        if(a[i]!=7){
        a[i]=7;
        b[state]=i;
        permu(state+1);
        a[i]=0;
        }
    }
}
int main()
{
    int m,i,num;
	scanf("%d %d",&n,&m);
	while(m--){
        scanf("%d",&num);
        c[num]=1;
	}
	for(i=1;i<=n;i++){
        if(c[i]==0){
            b[0]=i;
            a[i]=7;
            permu(1);
            a[i]=0;
            }
	}
    return 0;
}
