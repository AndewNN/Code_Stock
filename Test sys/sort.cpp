/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int> hp;
int main()
{
    int n,m,state=0,k,st,now,cou=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        hp.push(m*-1);
    }
    printf("\n");
    while(!hp.empty()){
        now=-1*hp.top();
        /*if((now-st)/k>state){
            printf("\n");
            state=(now-st)/k;
        }*/
        printf("%d ",now);
        cou++;
        if(cou%10==0) printf("\n");
        hp.pop();

    }
    return 0;
}
/*

84 79 65 78 78 62 80 67 82 73
81 68 60 74 67 75 92 80 71 62
52 62 76 76 65 63 68 51 48 53
71 75 74 77 68 73 61 66 96 79
67 70 61 81 57 62 57 69 60 76
81 93 75 72 60 65 56 75 88 35

88 70 61 43 31 56 64 82 73 67
55 73 57 37 78 77 59 35 27 86
61 49 54 60 74 49 78 68 70 78

*/
