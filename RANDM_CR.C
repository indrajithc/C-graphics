

#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{



int i,j,gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    j=1;
 // randomize();
while(!kbhit())
{
if(j==16)
j=1;
setcolor(j);
circle(random(getmaxx()),random(getmaxx()),33);
delay(333);
j++;
cleardevice();
}



getch();
}