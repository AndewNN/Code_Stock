/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
#define HASH 500009
char teststr[50],Qstr[1001000];
int HASH_ARRAY [500009],valueTELLER[100010],mark[1000100];
int main()
{
    int testn,testlen, summ, temp, checker ;
    scanf("%d %d",&testn,&testlen) ;
    for(int i= 0; i < testn ; i++)
    {
        scanf(" %s",teststr);
        summ= teststr[0]-'0';
        for(int j = 1 ; j <testlen ; j++)
        {
            summ *=2;
            summ+=teststr[j]-'0';
        }
        temp = summ;
        temp%=HASH;
        checker = 1;
        while(HASH_ARRAY[temp]!= 0)
        {
            temp+=checker ;
            checker*=2;
            temp%= HASH;
        }
        HASH_ARRAY[temp]= i+1;
        valueTELLER[i+1] = summ;
    }
    int nQ,Qlen,detected;
    scanf("%d",&nQ);
    for(int i=1; i<=nQ; i++)
    {
        detected=0;
        scanf("%d",&Qlen);
        scanf(" %s",&Qstr);
        if(testlen>Qlen)
        {
            printf("OK\n");
            continue;
        }
        summ=Qstr[0]-'0';
        for(int j=1; j<testlen-1; j++)
        {
            summ*=2;
            summ+=Qstr[j]-'0';
        }
        for(int j=testlen-1; j<Qlen; j++)
        {
            summ*=2;
            summ+=Qstr[j]-'0';
            summ&=((1<<testlen)-1);
            temp=summ;
            temp%=HASH;
            checker=1;
            while(HASH_ARRAY[temp]!=0){
                if(valueTELLER[HASH_ARRAY[temp]]==summ){
                    mark[HASH_ARRAY[temp]]=i;
                    detected=1;
                    break;
                }
                else{
                    temp+=checker;
                    checker*=2;
                    temp%=HASH;
                }
            }
        }
        if(detected==0){
            printf("OK\n");
            continue;
        }
        else{
            for(int j=1;j<=testn;j++)
                if(mark[j]==i)
                    printf("%d",j);
            printf("\n");
        }
    }
}



