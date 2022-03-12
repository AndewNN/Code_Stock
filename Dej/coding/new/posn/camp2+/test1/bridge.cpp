/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> a[100100];
priority_queue<int> hp;
int main()
{
    int n,d,v,mad=0,i,j=0;
    long long sum = 0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&d,&v);
        mad = max(mad,d);
        a[d].push_back(v);
    }
    for(i=mad;i>0;i--){
        for(auto x : a[i]){
            hp.push(x);
        }
        if(!hp.empty()){
            sum += (long long)hp.top();
            j++;
            hp.pop();
        }
    }
    printf("%lld\n%d\n",sum,j);
    return 0;
}
