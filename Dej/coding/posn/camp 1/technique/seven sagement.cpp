/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[5][100],b[5][100],c[50],d[50];
int main()
{
int n,m,i;
gets(c);
sscanf(c,"%d %d\n",&n,&m);
gets(a[0]); gets(a[1]); gets(a[2]);
gets(b[0]); gets(b[1]); gets(b[2]);
for(i=0;i<4*n;i+=4){
    if(a[0][i]==' '&&a[0][i+1]=='_'&&a[0][i+2]==' ' &&a[1][i]=='|'&&a[1][i+1]==' '&&a[1][i+2]=='|'&&a[2][i]=='|'&&a[2][i+1]=='_'&&a[2][i+2]=='|'){
c[i/4]='0';
    }
    if(a[0][i]==' '&&a[0][i+1]==' '&&a[0][i+2]==' ' &&a[1][i]==' '&&a[1][i+1]==' '&&a[1][i+2]=='|'&&a[2][i]==' '&&a[2][i+1]==' '&&a[2][i+2]=='|'){
c[i/4]='1';
    }
    if(a[0][i]==' '&&a[0][i+1]=='_'&&a[0][i+2]==' ' &&a[1][i]==' '&&a[1][i+1]=='_'&&a[1][i+2]=='|'&&a[2][i]=='|'&&a[2][i+1]=='_'&&a[2][i+2]==' '){
c[i/4]='2';
    }
    if(a[0][i]==' '&&a[0][i+1]=='_'&&a[0][i+2]==' ' &&a[1][i]==' '&&a[1][i+1]=='_'&&a[1][i+2]=='|'&&a[2][i]==' '&&a[2][i+1]=='_'&&a[2][i+2]=='|'){
c[i/4]='3';
    }
    if(a[0][i]==' '&&a[0][i+1]==' '&&a[0][i+2]==' ' &&a[1][i]=='|'&&a[1][i+1]=='_'&&a[1][i+2]=='|'&&a[2][i]==' '&&a[2][i+1]==' '&&a[2][i+2]=='|'){
c[i/4]='4';
    }
    if(a[0][i]==' '&&a[0][i+1]=='_'&&a[0][i+2]==' ' &&a[1][i]=='|'&&a[1][i+1]=='_'&&a[1][i+2]==' '&&a[2][i]==' '&&a[2][i+1]=='_'&&a[2][i+2]=='|'){
c[i/4]='5';
    }
    if(a[0][i]==' '&&a[0][i+1]=='_'&&a[0][i+2]==' ' &&a[1][i]=='|'&&a[1][i+1]=='_'&&a[1][i+2]==' '&&a[2][i]=='|'&&a[2][i+1]=='_'&&a[2][i+2]=='|'){
c[i/4]='6';
    }
    if(a[0][i]==' '&&a[0][i+1]=='_'&&a[0][i+2]==' ' &&a[1][i]==' '&&a[1][i+1]==' '&&a[1][i+2]=='|'&&a[2][i]==' '&&a[2][i+1]==' '&&a[2][i+2]=='|'){
c[i/4]='7';
    }
    if(a[0][i]==' '&&a[0][i+1]=='_'&&a[0][i+2]==' ' &&a[1][i]=='|'&&a[1][i+1]=='_'&&a[1][i+2]=='|'&&a[2][i]=='|'&&a[2][i+1]=='_'&&a[2][i+2]=='|'){
c[i/4]='8';
    }
    if(a[0][i]==' '&&a[0][i+1]=='_'&&a[0][i+2]==' ' &&a[1][i]=='|'&&a[1][i+1]=='_'&&a[1][i+2]=='|'&&a[2][i]==' '&&a[2][i+1]=='_'&&a[2][i+2]=='|'){
c[i/4]='9';
    }
}
c[i/4] = '\0';
for(i=0;i<4*m;i+=4){
    if(b[0][i]==' '&&b[0][i+1]=='_'&&b[0][i+2]==' ' &&b[1][i]=='|'&&b[1][i+1]==' '&&b[1][i+2]=='|'&&b[2][i]=='|'&&b[2][i+1]=='_'&&b[2][i+2]=='|'){
d[i/4]='0';
    }
    if(b[0][i]==' '&&b[0][i+1]==' '&&b[0][i+2]==' ' &&b[1][i]==' '&&b[1][i+1]==' '&&b[1][i+2]=='|'&&b[2][i]==' '&&b[2][i+1]==' '&&b[2][i+2]=='|'){
d[i/4]='1';
    }
    if(b[0][i]==' '&&b[0][i+1]=='_'&&b[0][i+2]==' ' &&b[1][i]==' '&&b[1][i+1]=='_'&&b[1][i+2]=='|'&&b[2][i]=='|'&&b[2][i+1]=='_'&&b[2][i+2]==' '){
d[i/4]='2';
    }
    if(b[0][i]==' '&&b[0][i+1]=='_'&&b[0][i+2]==' ' &&b[1][i]==' '&&b[1][i+1]=='_'&&b[1][i+2]=='|'&&b[2][i]==' '&&b[2][i+1]=='_'&&b[2][i+2]=='|'){
d[i/4]='3';
    }
    if(b[0][i]==' '&&b[0][i+1]==' '&&b[0][i+2]==' ' &&b[1][i]=='|'&&b[1][i+1]=='_'&&b[1][i+2]=='|'&&b[2][i]==' '&&b[2][i+1]==' '&&b[2][i+2]=='|'){
d[i/4]='4';
    }
    if(b[0][i]==' '&&b[0][i+1]=='_'&&b[0][i+2]==' ' &&b[1][i]=='|'&&b[1][i+1]=='_'&&b[1][i+2]==' '&&b[2][i]==' '&&b[2][i+1]=='_'&&b[2][i+2]=='|'){
d[i/4]='5';
    }
    if(b[0][i]==' '&&b[0][i+1]=='_'&&b[0][i+2]==' ' &&b[1][i]=='|'&&b[1][i+1]=='_'&&b[1][i+2]==' '&&b[2][i]=='|'&&b[2][i+1]=='_'&&b[2][i+2]=='|'){
d[i/4]='6';
    }
    if(b[0][i]==' '&&b[0][i+1]=='_'&&b[0][i+2]==' ' &&b[1][i]==' '&&b[1][i+1]==' '&&b[1][i+2]=='|'&&b[2][i]==' '&&b[2][i+1]==' '&&b[2][i+2]=='|'){
d[i/4]='7';
    }
    if(b[0][i]==' '&&b[0][i+1]=='_'&&b[0][i+2]==' ' &&b[1][i]=='|'&&b[1][i+1]=='_'&&b[1][i+2]=='|'&&b[2][i]=='|'&&b[2][i+1]=='_'&&b[2][i+2]=='|'){
d[i/4]='8';
    }
    if(b[0][i]==' '&&b[0][i+1]=='_'&&b[0][i+2]==' ' &&b[1][i]=='|'&&b[1][i+1]=='_'&&b[1][i+2]=='|'&&b[2][i]==' '&&b[2][i+1]=='_'&&b[2][i+2]=='|'){
d[i/4]='9';
    }
}
d[i/4]='\0';
printf("%lld\n",atol(c)+atol(d));
    return 0;
}
