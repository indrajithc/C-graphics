 #include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>



 void main()
   {
   int i,j,x,y,gd,gm,c;
   clrscr();
   detectgraph(&gd,&gm);
   initgraph(&gd,&gm,"..\\bgi");
   c=12;
   setcolor(c);
   setfillstyle(1,c);
   rectangle(200,10,440,90);
   floodfill(210,20,c);
   c=15;
   setcolor(c);
   setfillstyle(1,c);
   rectangle(200,90,440,170);
   floodfill(210,100,c);
   c=10;
   setcolor(c);
   setfillstyle(1,c);
   rectangle(200,170,440,250);
   floodfill(210,180,c);
   setcolor(1);
   circle(320,130,38);
   for(i=360 ;i>0;i-=15)
   {
 x= 320 - (38 * cos(((i) * 3.14) / 180));
 y= 130 - (38 * sin(((i )* 3.14) / 180));



   line(320,130,x,y);
   }
   c=8;
   setcolor(c);
   setfillstyle(1,c);
   rectangle(195,10,200,getmaxy());
   floodfill(197,20,c);
   getch();
   closegraph();
   }