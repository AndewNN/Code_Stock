/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[5];
priority_queue<int> hp,ap,np;
int main()
{
    int i,n,k,hpm = 0,x,hpn,ch = -1;
    scanf("%d %d",&n,&k);
    x = k;
    a[3]=a[4] = -1;
    for(i=0;i<n;i++){
        scanf("%d",&a[2]);
        if(i==1 && a[1]>a[2]){
            hp.push(a[1]);
            hpm++;
        }
        if(i==n-1 && a[2]>a[1]){
            hp.push(a[2]);
            hpm++;
        }
        if(i > 1 && (a[1]>a[0] && a[1] > a[2])){
            hp.push(a[1]);
            hpm++;
        }
        a[0] = a[1];
        a[1] = a[2];
    }
    while(!hp.empty()){
        if(ch == hp.top()){
            hp.pop();
        }else{
            ap.push(hp.top());
            np.push(hp.top()*-1);
            ch = hp.top();
            hp.pop();
        }
    }
    if(ap.empty()){
            printf("-1\n");
        }
        else if(ap.size()<k){
            while(!np.empty() && k>0){
                k--;
                printf("%d\n",np.top()*-1);
                np.pop();
            }
    }else{
        while(!ap.empty() && k>0){
                k--;
                printf("%d\n",ap.top());
                ap.pop();
            }
    }
    return 0;
}
/*
10
3
45
20
20
5
45
50
65
90
35
45
*/
