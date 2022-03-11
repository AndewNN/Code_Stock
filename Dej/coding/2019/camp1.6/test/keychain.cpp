#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int b[100100];
int main()
{
    int n,k,i,a,ans=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        q.push({a%n});
    }
    for(i=1;i<=n+1;i++){
        b[i]=b[i-1];
        while(q.front()!=(i%n)){
            b[i]++;
            a = q.front();
            q.pop();
            q.push(a);
        }
    }
    ans = (k/n)*b[n+1];
    if(k%n==0){
        ans -= (b[n+1]-b[n]);
    }else{
        ans+= b[k%n]-b[1];
    }
    printf("%d",ans);
    return 0;
}
