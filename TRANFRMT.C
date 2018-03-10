
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
void main()
{



int i,j,gd,gm,xrad,yrad,x,r,a,midx,y,c,tx,ty,x1,x2,y1,y2;
//int x1,y1,x2,y2 ;
float b1,b2;
float t,th,deg,s;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
f:
clrscr();
cleardevice();
    setcolor(15);
outtextxy(0,0,"[1] line translation");
outtextxy(0,10,"[2] pixel rotation");
outtextxy(0,20,"[3] circle scaling");  printf("\n\n\n\n\t\t:");
scanf("%d",&c);
if(c==1)
  {
  gotoxy(0,0);
  printf("\nEnter the line");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  setcolor(15);
  line(x1,y1,x2,y2);
  printf("\nEnter the translation vectors");
  scanf("%d%d",&tx,&ty);
  setcolor(12);
    line(x1+tx,y1+ty,x2+tx,y2+ty);
    getch();

    cleardevice();
    goto f;
  }
if(c==2)
{
gotoxy(0,0);
printf("\nenter the pixel");
scanf("%d%d",&x2,&y2);
putpixel(x2,y2,15);
circle(x2,y2,10);

printf("\nenter the center of rotatn");
scanf("%d%d",&x1,&y1);
  putpixel(x1,y1,14);
printf("\nenter angle of rotation");
scanf("%f",&th);

       th=(th*3.14)/180;


//
b1=x1+(x2-x1)*cos(th)-(y2-y1)*sin(th);
//
b2=y1+(x1-x2)*sin(th)+(y1-y2)*cos(th);
//
//
//line(x1+44,y1,b1,b2);


   putpixel(b1,b2,12);

  circle(b1,b2,10);
   setlinestyle(1,0, 1);
   line(x1,y1,b1,b2);
     line(x1,y1,x2,y2);


getch();
	cleardevice();
	 goto f;
}
if(c==3)
{

x=y=r=s=0;
   printf("\nEnter the circle and r");
  scanf("%d%d%d",&x,&y,&r);
  setcolor(15);
  circle(x,y,r);
  printf("\nEnter the scaling value");
  scanf("%f",&s);
  setcolor(12);
  circle(x,y,(r*s));
  getch();
      cleardevice();
  goto f;

//    line(x1+tx,y1+ty,x2+tx,y2+ty);

}


//getch();
closegraph();
}















