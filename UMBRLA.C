#include <stdio.h>
 #include <conio.h>
 #include <graphics.h>
 #include <dos.h>

 int i,j,gd,gm,q,w,e,r,t,y,u,cd,o,p,x,c;


 int main()

 {


clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);


    c=6;
setcolor(c);
line(100,120,99,300);
line(100,120,101,300);
    ellipse(93,300,165,360,8,8);
    ellipse(93,300,165,360,7,7);
   ellipse(93,300,165,360,6,6);

    c=12;
setcolor(c);
setfillstyle(1,c);
ellipse(100,200,10,170,90,70);
ellipse(100,190,10,170,30,10);

ellipse(40,190,10,170,30,10);
ellipse(160,190,10,170,30,10);
floodfill(98,150,c);
floodfill(101,150,c);



 getch();
 closegraph();
 }