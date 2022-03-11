#include<bits/stdc++.h>
using namespace std;
int a[200100],b[200100];
priority_queue<int> hp;
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]!= 0){
            b[a[i]]=1;
        }
    }
    for(i=1;i<=n;i++){
        if(b[i]==0){
            hp.push(i);
        }
    }
    for(i=1;i<=n;i++){
        if(a[i]!=0){
            printf("%d ",a[i]);
        }else{
            if(hp.top()==i){
                c = hp.top();
                hp.pop();
                printf("%d ",hp.top());
                hp.pop();
                hp.push(c);
            }else{
                printf("%d ",hp.top());
                hp.pop();
            }
        }
    }
    return 0;
}
