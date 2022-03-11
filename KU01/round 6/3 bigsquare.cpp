/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >mp1,mp2;
map<int,int> mk;
priority_queue<int> hp;
int main()
{
    int n,x,y,i,mi,mx,ii,mxx=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        mp1[x-y].push_back(y);
        mp2[x+y].push_back(y);
        if(!mk[x-y]){
            hp.push(x-y);
            mk[x-y]=1;
        }
        if(!mk[x+y]){
            hp.push(x+y);
            mk[x+y]=1;
        }
    }
    while(!hp.empty()){
        ii=hp.top();
        hp.pop();
        mi=1e9,mx=-1e9;
        for(auto x:mp1[ii]){
            mx=max(x,mx);
            mi=min(x,mi);
        }
        mxx=max(mxx,mx-mi);
        mi=1e9,mx=-1e9;
        for(auto x:mp2[ii]){
            mx=max(x,mx);
            mi=min(x,mi);
        }
        mxx=max(mxx,mx-mi);
    }
    printf("%d",mxx);
}
