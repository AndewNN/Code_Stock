#include<bits/stdc++.h>
using namespace std;
int a[1100];
int main()
{
    int n,x,y,z,i,st=0,sum=0,j,mx;
    scanf("%d %d %d %d",&n,&x,&y,&z);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(st<=a[i]){
            sum+=(a[i]-st)*x;
            st = a[i];
            sum+=(st*y);
        }else{

        }
    }
    printf("%d",sum);
    return 0;
}
