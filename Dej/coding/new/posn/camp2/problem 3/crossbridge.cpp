/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[120];
int main()
{
    int i,n,n1,n2,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    n1 = a[0],n2=a[1];
    i = n-1;
    while(i>1){
        sum+=a[i];
        i-=2;
    }
    if(n%2==0){
        sum += (n2*(n/2))+((n2+n1)*((n/2)-1));
        printf("%d\n",sum);
    }else{
        sum += (n2*(n/2))+((n2+n1)*((n/2)-1))+n1;
        printf("%d\n",sum);
    }
    return 0;
}
