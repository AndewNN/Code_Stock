#include<bits/stdc++.h>
using namespace std;
int main(){
    int q=20,m,n;
    while(q--){
        scanf("%d %d",&m,&n);
        if(m%2!=0 || m/2<n || m>4*n)
            printf("0\n");
        else
            printf("%d\n",(4*n-m)/2+1);
    }
}
