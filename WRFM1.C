
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
void main()
{



int i,j,gd,gm,xrad,yrad,x,r,a,midx,y,midy;
int x1,y1,x2,y2 ;
float b1,b2;
float t,deg;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");


//setbkcolor(15);
//setcolor(0);
midx=300;midy=280;

 xrad=54;yrad=26;
    ellipse(midx,midy,0,360,xrad,yrad);
 for (i = 360; i > 0; i = i - 16)
  {
 x= midx - (xrad * cos((i * 3.14) / 180));
 y = midy - (yrad * sin((i * 3.14) / 180));
   line(x,y,300,150);
// putpixel(x,y,12);
 }


getch();
}
