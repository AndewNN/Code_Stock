#include<bits/stdc++.h>
#defind N
using namespace std;
int L[N*lgn],R[N*lgn],sum[N*lgn];
int sz;
int Copy(int u,int &v){
    ++sz;
    L[sz] = L[u];
    R[sz] = R[u];
    sum[sz] = sum[u];
    v = sz;
    return v;
}
void upd(int p,int idx,int l,int r){
    if(l==r){
        sum[p] = 1;
        return ;
    }
    int mid =(l+r)/2;
    if(idx <= mid) upd(Copy(L[p],L[p]),idx,l,mid);
    else upd(Copy(R[p],R[p]),idx,mid+1,r);
}
int query(int p,int q,int k,int l,int r,int SUM){
    int mid =(l+r)/2;
    if(sum[l[q]]-su)
}
int main()
{

    return 0;
}
