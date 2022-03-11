#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    int i,j,sum=0;
    for(i=0;i<9;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<9;i++)
        for(j=i+1;j<9;j++){
            if(sum-a[i]-a[j]==100)
                a[i]=a[j]=-1;
        }
    for(i=0;i<9;i++)
        if(a[i]!=-1)
            printf("%d\n",a[i]);
}
