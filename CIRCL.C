

#include<graphics.h>
#include<conio.h>
#include<stdio.h>#include<dos.h>
void main()
{



int i,j,gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);

setcolor(12);
setfillstyle(3,12);
//..circle(300,200,80);
//floodfill(400,200,12);
printf("x=%d\ny=%d",getmaxx(),getmaxy());
getch();
}