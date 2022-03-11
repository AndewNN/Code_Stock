#include<bits/stdc++.h>
using namespace std;
int a[5];
int main(){
    int i;
    char o;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    sort(a,a+3);
    for(i=0;i<3;i++){
        scanf(" %c",&o);
        printf("%d ",a[o-'A']);
    }
}
