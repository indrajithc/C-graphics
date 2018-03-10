

#include<graphics.h>
#include<conio.h>
#include<stdio.h>#include<dos.h>
void main()
{



int i,j,gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
putpixel(getmaxx()/2,getmaxy()/2,12);
getch();
}