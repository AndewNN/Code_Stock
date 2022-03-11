#include<bits/stdc++.h>
using namespace std;
char c[100];
string a[100100];
int main()
{
    int n,m,k,i,b;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++){
        scanf(" %s",c);
        a[i] = c;
    }
    sort(a,a+n);
    while(m--){
        scanf(" %s",c);
        b = lower_bound(a,a+n,c)-a;
        if(a[b]==c) printf("Accepted\n");
        else printf("Rejected\n");
    }
    return 0;
}
