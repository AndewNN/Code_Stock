/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
PII a[500];
int mark[3][3][3][3][2],coo=1;
void play(int h,int g,int hh,int gg,int state,int cou)
{
    if(h==0 && g==0 )
    {
        printf("#%d %d\n",coo++,cou);
        for(int k=1;k<=cou;k++)
            printf("%d %d\n",a[k].first,a[k].second);
        printf("\n");
    }
    if(state==0)
    {
        //play h2
        if(h-2>0 && h-2>=g && hh+2>=gg && !mark[h-2][g][hh+2][gg][1])
        {
            mark[h-2][g][hh+2][gg][1]=1,cou++;
            a[cou].first=2,a[cou].second=0;
            play(h-2,g,hh+2,gg,1,cou);
            mark[h-2][g][hh+2][gg][1]=0,cou--;
        }
        if(h-2==0 && hh+2>=gg && !mark[h-2][g][hh+2][gg][1])
        {
            mark[h-2][g][hh+2][gg][1]=1,cou++;
            a[cou].first=2,a[cou].second=0;
            play(h-2,g,hh+2,gg,1,cou);
            mark[h-2][g][hh+2][gg][1]=0,cou--;
        }

        //play h1g1
        if(h-1>=0 && g-1>=0 && !mark[h-1][g-1][hh+1][gg+1][1] && hh+1 >= gg+1)
        {
            mark[h-1][g-1][hh+1][gg+1][1]=1,cou++;
            a[cou].first=1,a[cou].second=1;
            play(h-1,g-1,hh+1,gg+1,1,cou);
            mark[h-1][g-1][hh+1][gg+1][1]=0,cou--;
        }

        //play g2
        if(g-2>=0 && hh>0 && hh>=gg+2 && !mark[h][g-2][hh][gg+2][1])
        {
            mark[h][g-2][hh][gg+2][1]=1,cou++;
            a[cou].first=0,a[cou].second=2;
            play(h,g-2,hh,gg+2,1,cou);
            mark[h][g-2][hh][gg+2][1]=0,cou--;
        }
        if(g-2>=0 && hh==0 && !mark[h][g-2][hh][gg+2][1])
        {
            mark[h][g-2][hh][gg+2][1]=1,cou++;
            a[cou].first=0,a[cou].second=2;
            play(h,g-2,hh,gg+2,1,cou);
            mark[h][g-2][hh][gg+2][1]=0,cou--;
        }
    }
    if(state==1)
    {
        //play h1
        if(hh-1>0 && hh-1>=gg && !mark[h+1][g][hh-1][gg][0])
        {
            mark[h+1][g][hh-1][gg][0]=1,cou++;
            a[cou].first=1,a[cou].second=0;
            play(h+1,g,hh-1,gg,0,cou);
            mark[h+1][g][hh-1][gg][0]=0,cou--;
        }
        if(hh-1==0 && !mark[h+1][g][hh-1][gg][0])
        {
            mark[h+1][g][hh-1][gg][0]=1,cou++;
            a[cou].first=1,a[cou].second=0;
            play(h+1,g,hh-1,gg,0,cou);
            mark[h+1][g][hh-1][gg][0]=0,cou--;
        }

        //play g1
        if(h>0 && h>=g+1 && gg-1>=0 && !mark[h][g+1][hh][gg-1][0])
        {
            mark[h][g+1][hh][gg-1][0]=1,cou++;
            a[cou].first=0,a[cou].second=1;
            play(h,g+1,hh,gg-1,0,cou);
            mark[h][g+1][hh][gg-1][0]=0,cou--;
        }
        if(h==0 && gg-1>=0 && !mark[h][g+1][hh][gg-1][0])
        {
            mark[h][g+1][hh][gg-1][0]=1,cou++;
            a[cou].first=0,a[cou].second=1;
            play(h,g+1,hh,gg-1,0,cou);
            mark[h][g+1][hh][gg-1][0]=0,cou--;
        }

        //play h2
        if(h+2>=g && hh-2>0 && hh-2>=gg && !mark[h+2][g][hh-2][gg][0])
        {
            mark[h+2][g][hh-2][gg][0]=1,cou++;
            a[cou].first=2,a[cou].second=0;
            play(h+2,g,hh-2,gg,0,cou);
            mark[h+2][g][hh-2][gg][0]=0,cou--;
        }
        if(h+2>=g && hh-2==0 && !mark[h+2][g][hh-2][gg][0])
        {
            mark[h+2][g][hh-2][gg][0]=1,cou++;
            a[cou].first=2,a[cou].second=0;
            play(h+2,g,hh-2,gg,0,cou);
            mark[h+2][g][hh-2][gg][0]=0,cou--;
        }

        //play g2
        if(h>0 && h>=g+2 && gg-2>=0 && !mark[h][g+2][hh][gg-2][0])
        {
            mark[h][g+2][hh][gg-2][0]=1,cou++;
            a[cou].first=0,a[cou].second=2;
            play(h,g+2,hh,gg-2,0,cou);
            mark[h][g+2][hh][gg-2][0]=0,cou--;
        }
        if(h==0 && gg-2>=0 && !mark[h][g+2][hh][gg-2][0])
        {
            mark[h][g+2][hh][gg-2][0]=1,cou++;
            a[cou].first=0,a[cou].second=2;
            play(h,g+2,hh,gg-2,0,cou);
            mark[h][g+2][hh][gg-2][0]=0,cou--;
        }

        //play h1g1
        if(hh-1>=0 && gg-1>=0 && !mark[h+1][g+1][hh-1][gg-1][0] && h+1>=g+1)
        {
            mark[h+1][g+1][hh-1][gg-1][0]=1,cou++;
            a[cou].first=1,a[cou].second=1;
            play(h+1,g+1,hh-1,gg-1,0,cou);
            mark[h+1][g+1][hh-1][gg-1][0]=0,cou--;
        }
    }
}
int main()
{
    play(3,3,0,0,0,0);
    return 0;
}
