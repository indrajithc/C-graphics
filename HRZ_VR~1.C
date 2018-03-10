

#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{



int i,j,gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(i=0;!kbhit();i++)
{

setcolor(10);
setfillstyle(1,10);
circle(i,getmaxy()/2,40);
floodfill(i,getmaxy()/2,10);


setcolor(12);
setfillstyle(1,12);
circle(getmaxx()/2,i,40);
floodfill(getmaxx()/2,i,12);
delay(33);
cleardevice();
}
getch();
}