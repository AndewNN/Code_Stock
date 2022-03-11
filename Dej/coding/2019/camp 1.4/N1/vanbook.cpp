#include<bits/stdc++.h>
using namespace std;
priority_queue< pair< int, int> > hp;
int main()
{
    int n,k,i,a,b,c;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++){
        hp.push(make_pair(0,-i));
    }
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        printf("%d\n",hp.top().second*-1);
        b = hp.top().first,c = hp.top().second;
        hp.pop();
        hp.push(make_pair(b-a,c));
    }
    return 0;
}
