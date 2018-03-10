
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{



int i,j,gd,gm, x1,x2,y1,y2,xmax,xmin,ymax,ymin,xd,yd;
float m;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);

printf("\n Enter the window co ordnt :");
scanf("%d%d%d%d",&xmin,&ymin,&xmax,&ymax);
rectangle(xmin,ymin,xmax,ymax);
delay(500);

printf("\n Enter the co ordntz of line ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
line(x1,y1,x2,y2);
rectangle(xmin,ymin,xmax,ymax);
delay(500);


printf("aftr clpng");
delay(999);
cleardevice();

m=(float)(y2-y1)/(x2-x1);

if(x1<xmin)
{
xd=xmin;
yd=y1+m*(xd-x1);
x1=xd;
y1=yd;
}
 if(xmax<x2)
{
xd=xmax;
yd=y2+m*(xd-x2);
x2=xd;
y2=yd;
}
if(y1<ymin)
{
yd=ymin;
xd=x1+(1/m)*(yd-y1);
x1=xd;
y1=yd;

}

if(y2>ymax)
{
yd=ymax;
xd=x2+(1/m)*(yd-y2);
x2=xd;
y2=yd;
}

cleardevice();
setcolor(10);
line(x1,y1,x2,y2);

setcolor(15);
rectangle(xmin,ymin,xmax,ymax);



//circle(300,200,80);
getch();
closegraph();
}