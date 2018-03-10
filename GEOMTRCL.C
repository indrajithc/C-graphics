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


setcolor(10);
settextstyle(4,0,3);
outtextxy(200,50," Geometrical Shapes");


delay(500);
settextstyle(1,0,2);
 i=70;
setcolor(1);
circle(100,100+i,50);
outtextxy(40,180+i,"Circle");
delay(500);
setcolor(2);
rectangle(200,50+i,300,150+i);
outtextxy(210,180+i,"Rectangle");
delay(500);
setcolor(3);
arc(350,140+i,0,80,70);
outtextxy(370,180+i,"Arc");
delay(500);
setcolor(4);
ellipse(500,100+i,0,360,30,60);
outtextxy(470,180+i,"Ellipse");
 delay(500);
setcolor(5);
bar(40,240+i,150,270+i);
outtextxy(40,300+i,"Bar");
delay(500);
setcolor(6);
bar3d(220,240+i,330,270+i,10,60);
outtextxy(230,300+i,"3D Bar");
delay(500);
getch();
closegraph();
}