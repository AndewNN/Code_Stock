#include<bits/stdc++.h>
using namespace std;
int m;
struct A{
    int a[20];
    bool operator < (const A & o) const{
        int i;
        for(i=0;i<m;){
            if(a[i]==o.a[i]){
                i++;
            }else{
                return a[i] < o.a[i];
            }
        }
    }
};
A b[10100];
int main()
{
    int n,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i].a[j]);
        }
    }
    sort(b,b+n);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",b[i].a[j]);
        }
        printf("\n");
    }
    return 0;
}
