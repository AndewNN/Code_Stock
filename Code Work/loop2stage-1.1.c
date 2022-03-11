#include<stdio.h>
int id1[3650][110],si1[3650],id2[3650][110],si2[3650],id3[3650][110],si3[3650]; // 1-teacher 2-women 3-man
int main()
{
    int nid,nty,nti,i,j,cou=0;
    while(1)
    {
        printf("What is your type? (1-teacher, 2-women, 3-man or else to exit)\nType : ");
        scanf("%d",&nty);
        if((nty!=1)&&(nty!=2)&&(nty!=3))
            break;
        if(nty==1)
            printf("What is ID of teacher?\nID : ");
        else
            printf("What is ID of student?\nID : ");
        scanf("%d",&nid);
        printf("what time is?\nTime : ");
        scanf("%d",&nti);
        printf("\t==Accepted==\n\n");
        cou++;
        if(nty==1)
        {
            id1[nti][si1[nti]]=nid;
            si1[nti]++;
        }
        else if(nty==2)
        {
            id2[nti][si2[nti]]=nid;
            si2[nti]++;
        }
        else if(nty==3)
        {
            id3[nti][si3[nti]]=nid;
            si3[nti]++;
        }
    }
    printf("\n\tNumber of user : %d\n\tOrder of queue : ",cou);
    for(i=0; i<=3600; i++)
        for(j=0; j<si1[i]; j++)
            printf("%d ",id1[i][j]);
    for(i=0; i<=3600; i++)
        for(j=0; j<si2[i]; j++)
            printf("%d ",id2[i][j]);
    for(i=0; i<=3600; i++)
        for(j=0; j<si3[i]; j++)
            printf("%d ",id3[i][j]);

    return 0;
}
/*

1 36 10
2 12 8
3 7 5
1 4 10
2 8 9
3 6 1
-1

*/
