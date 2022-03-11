/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,f,usa,stb=0,stc=0,staxd=0,ste=0;
int A=0,B=0,C=0,D=0,E=0,x,y;
scanf("%d",&f);
for(int i=0;i<f;i++){
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    A +=a;
    B +=b;
    C +=c;
    D +=d;
    E +=e;
}
usa = A;
usa += B;
stb += B;
if(C>1){
    usa += (C-(C%2))/2;
    stc = C%2;
    if(stc>0){
        usa++;
    }
}else if(C<2){
    if(C==0){

    }else if(C==1){
    usa++;
    stc++;
    }
}
staxd = staxd+(stc*2)+stb;
if(D<staxd){
    staxd = staxd-D;
    ste = staxd*2;
}else if(D==staxd){
    staxd =0;
}else if(D>staxd){
    D = D- staxd;
    x =D%4;
    D = D-x;
    if(x>0){
        usa++;
    }
    usa += D/4;
    ste = x*2;
}
if(E<=ste){
printf("%d",usa);
    return 0;
}else if(E>ste){
    E = E- ste;
    y =E%8;
    E= E-y;
    if(y>0){
        usa++;
    }
    usa += E/8;
printf("%d",usa);
    return 0;
}
}
