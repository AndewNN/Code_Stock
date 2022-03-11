#include<bits/stdc++.h>
using namespace std;
struct A{
    char an[110];
    bool operator < (const A & o) const{
        if(strcmp(an,o.an)< 0) return true;
        else return false;
    }
};
int a[100100];
double b[100100];
char c[100100];
A d[100100];
int main()
{
    int n,i,l;
    scanf("%d %d",&n,&l);
    if(n==1){
        for(i=0;i<l;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+l);
        for(i=0;i<l;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        for(i=l-1;i>=0;i--){
            printf("%d ",a[i]);
        }
    }else if(n==2){
        for(i=0;i<l;i++){
            scanf("%lf",&b[i]);
        }
        sort(b,b+l);
        for(i=0;i<l;i++){
            printf("%.0lf ",b[i]);
        }
        printf("\n");
        for(i=l-1;i>=0;i--){
            printf("%.0lf ",b[i]);
        }
    }else if(n==3){
        for(i=0;i<l;i++){
            scanf(" %c",&c[i]);
        }
        sort(c,c+l);
        for(i=0;i<l;i++){
            printf("%c ",c[i]);
        }
        printf("\n");
        for(i=l-1;i>=0;i--){
            printf("%c ",c[i]);
        }
    }else{
        for(i=0;i<l;i++){
            scanf(" %s",d[i].an);
        }
        sort(d,d+l);
        for(i=0;i<l;i++){
            printf("%s ",d[i].an);
        }
        printf("\n");
        for(i=l-1;i>=0;i--){
            printf("%s ",d[i].an);
        }
    }
    return 0;
}
