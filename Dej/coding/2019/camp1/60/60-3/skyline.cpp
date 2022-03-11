#include<bits/stdc++.h>
using namespace std;
int an[400];
int main()
{
    int n,i,a,b,h,last;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&a,&h,&b);
        for(i=a;i<b;i++){
            if(an[i]<h){
                an[i] = h;
            }
        }
    }
    last = 0;
    for(i=1;i<=300;i++){
        if(an[i]!=last){
            printf("%d %d ",i,an[i]);
            last = an[i];
        }
    }
    return 0;
}
