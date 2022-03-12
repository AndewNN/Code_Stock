#include <windows.h>
#include <iostream>

using namespace std;
int y=4;

char Map[60][160]={
    "                                                                                                                               ",
    "                                                                                                                               ",
    "                                                                                                                               ",
    "                                                           ###############################################################     ",
    "                                                ###############################################################                ",
    "###############################################################################################################################"};


bool endgame=true;

void gotoXY(int x,int y)
{
    COORD coord = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}//this will set our console cursor where we want to...

void showmap (int u)
{
    for (int i=0;i<=6;i++)
    {
        for (int j=u;j<=u+20;j++)
        {
            cout<<Map[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int n=0;
    int jump=0;
    while (endgame==true)
    {
        gotoXY(0,0);
        showmap(n);
        n++;
        if (jump==0 && GetAsyncKeyState(VK_UP) && Map[y+1][n+3]=='#')jump=3;
        if (jump>0)
        {
          y--;jump--;
        }
        else if (Map[y+1][n+3]!='#')
        {
            y++;
        }
        gotoXY(4,y);
        cout<<"@";
        if (Map[y][n+3]=='#')endgame=false;
        Sleep(50);
    }
}//this is the game the source will be in the description ...
