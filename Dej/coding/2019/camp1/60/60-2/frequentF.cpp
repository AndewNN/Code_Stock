#include<bits/stdc++.h>
using namespace std;
struct A{
    int id,num,ra;
    bool operator < (const A & o) const{
        if(num != o.num) return num > o.num;
        else   return ra < o.ra;
    }
};
A an[1100];
int a[1100];
int main()
{
    int c,n,i,b,fr,cou=0,j;
    scanf("%d %d",&n,&c);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b = a[0];
    fr = 0;
    for(i=0;i<n;i++){
        if()
    }
    sort(an,an+cou);
    for(i=0;i<cou;i++){
        b = an[i].id,fr = an[i].num;
        for(j=0;j<fr;j++){
            printf("%d ",b);
        }
    }
    return 0;
}
