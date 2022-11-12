/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
map<int,int> ss,tt,mk;
map<int,vector<int> > v;
priority_queue<int> hp;
stack<int> st;
int main()
{
    int n,l,i,s,t,k,ii,ans=0;
    scanf("%d %d",&n,&l);
    for(i=0;i<n;i++){
        scanf("%d %d",&s,&t);
        if(!mk[s]){
            hp.push(-1*s);
            mk[s]=1;
        }
        if(!mk[t]){
            hp.push(-1*t);
            mk[t]=1;
        }
        ss[s]=1;
        tt[t]=1;
        v[s].push_back(t);
    }
    while(!hp.empty()){
        i=hp.top()*-1;
        hp.pop();
        if(ss[i]==1)
            st.push(i);
        if(tt[i] == 1){
            ans++,tt[i]=0;
            while(!st.empty()){
                ii=st.top();
                st.pop();
                for(auto x:v[ii]){
                    tt[x]=0;
                }
            }

        }
    }
    printf("%d",ans);

}
/*

5 100
3 7
7 14
6 25
11 18
16 21

4 200
10 20
20 35
40 50
5 45

*/
