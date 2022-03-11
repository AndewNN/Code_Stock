#include<bits/stdc++.h>
using namespace std;
struct A{
    int s,b;
};
A a[13];
int main(){
    int i,j,n,s,b,mi=1e9;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i].s,&a[i].b);
    for(i=1;i<1<<n;i++){
        s=1,b=0;
        for(j=0;j<n;j++){
            if((i>>j)%2==1)
                s*=a[j].s,b+=a[j].b;
        }
        mi=min(mi,abs(s-b));
    }
    printf("%d\n",mi);
}

