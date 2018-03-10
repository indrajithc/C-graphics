

#include<graphics.h>
#include<conio.h>
#include<stdio.h>#include<dos.h>
void main()
{



int i,j,gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
j=1;
for(i=200;!kbhit();i--)
{
if(1>i)
i=200;

if(0==i%10)
j++;

if(j>15)
j=1;

setcolor(j);
circle(getmaxx()/2,getmaxy()/2,i);
delay(22);
}
getch();
}