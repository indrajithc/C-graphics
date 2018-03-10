


#include<graphics.h>
#include<conio.h>

#include<stdio.h>
#include<dos.h>
#include<math.h>
void main()
{



int i,j,gd,gm,xrad,yrad,c,x,r,a,xd,yd,xf,yf,xdf,ydf,xff,yff,xdff,ydff,midx,y,midy,oldx,oldy;
int x1,y1,x2,y2 ;
float b1,b2;
float t,deg;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"..\\bgi");
      r=0;
	 c=15;
      setcolor(c);
      setfillstyle(1,c);
      rectangle(0,getmaxy()-20,getmaxx()-0,getmaxy());
      floodfill(20,getmaxy()-4,c);

      rectangle(getmaxx()/2+5,getmaxy()-150,getmaxx()/2-5,getmaxy());
	 c=10;
      setcolor(c);
      setfillstyle(11,c);

    //  line(getmaxx()/2,100,getmaxx()/2,getmaxy());
       //line(getmaxx()/2-80,getmaxy()-100,getmaxx()/2,getmaxy()-100);
       ellipse(getmaxx()/2,getmaxy()-60,0,180,114,60);
      // line(getmaxx()/2-110,getmaxy()-75,getmaxx()/2,100);
			     //  line(getmaxx()/2+110,getmaxy()-75,getmaxx()/2,100);
       //                       	line(getmaxx()/2-115,getmaxy()-115,getmaxx()/2-105,getmaxy()-160);
       line(getmaxx()/2-110,getmaxy()-75,getmaxx()/2-70,340);
       line(getmaxx()/2-90,345,getmaxx()/2-70,340);
	 line(getmaxx()/2-90,345,getmaxx()/2-60,300);
	  line(getmaxx()/2-76,310,getmaxx()/2-60,300);
	  line(getmaxx()/2-76,310,getmaxx()/2-47,260);
	  line(getmaxx()/2-60,265,getmaxx()/2-47,260);
	   line(getmaxx()/2-60,265,getmaxx()/2-32,212);
	   line(getmaxx()/2-40,213,getmaxx()/2-32,212);
	   line(getmaxx()/2-40,213,getmaxx()/2-18,170);
	     line(getmaxx()/2-27,172,getmaxx()/2-18,170);
	     line(getmaxx()/2-27,172,getmaxx()/2-5,130);
	      line(getmaxx()/2-10,132,getmaxx()/2-5,130)   ;
	      //
	       line(getmaxx()/2-10,132,getmaxx()/2,100)   ;






	       {
		 line(getmaxx()/2+110,getmaxy()-75,getmaxx()/2+70,340);
       line(getmaxx()/2+90,345,getmaxx()/2+70,340);
	 line(getmaxx()/2+90,345,getmaxx()/2+60,300);
	  line(getmaxx()/2+76,310,getmaxx()/2+60,300);
	  line(getmaxx()/2+76,310,getmaxx()/2+47,260);
	  line(getmaxx()/2+60,265,getmaxx()/2+47,260);
	   line(getmaxx()/2+60,265,getmaxx()/2+32,212);
	   line(getmaxx()/2+40,213,getmaxx()/2+32,212);
	   line(getmaxx()/2+40,213,getmaxx()/2+18,170);
	     line(getmaxx()/2+27,172,getmaxx()/2+18,170);
	     line(getmaxx()/2+27,172,getmaxx()/2+5,130);
	      line(getmaxx()/2+10,132,getmaxx()/2+5,130)   ;
	      //
	       line(getmaxx()/2+10,132,getmaxx()/2,100)   ;
	       }
	      //

	      floodfill(getmaxx()/2,200,c);
      getch();
      closegraph();
      }