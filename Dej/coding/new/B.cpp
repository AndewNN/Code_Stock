#include<bits/stdc++.h>
using namespace std;
long long  c,i,n,k,b[200100],ans=0;
char a[200100];
priority_queue<long long> hp;
int main()
{
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
    }
    scanf(" %s",a);
    for(i=0;i<n;i++){
        hp.push(b[i]);
        while(a[i]==a[i+1]){
            hp.push(b[i+1]);
            i++;
        }
        for(c=0;c<k;c++){
            if(hp.empty()){
                break;
            }
            ans+=hp.top();
            hp.pop();
        }
        while(!hp.empty()){
            hp.pop();
        }
    }
    printf("%lld\n",ans);
    return 0;
}
