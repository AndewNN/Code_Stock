#include<bits/stdc++.h>
using namespace std;
priority_queue<int> h1,h2,h3,h4;
int main()
{
    int n,i,j,ans=0,a,b,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a);
            if(i%2==1 && j%2==1){
                h1.push(a);
            }
            if(i%2==0 && j%2==1){
                h2.push(a);
            }
            if(i%2==1 && j%2==0){
                h3.push(a);
            }
            if(i%2==0 && j%2==0){
                h4.push(a);
            }
        }
    }
    n = n/2;
    n*=n;
    while(n--){
        a = h1.top();
        h1.pop();
        b = h2.top();
        h2.pop();
        c = h3.top();
        h3.pop();
        d = h4.top();
        h4.pop();
        ans += (a*b*c*d);
    }
    printf("%d\n",ans);
    return 0;
}
