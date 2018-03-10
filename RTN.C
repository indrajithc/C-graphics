
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
void main()
{



int i,j,gd,gm,xrad,yrad,x,r,a,xd,yd,xf,yf,xdf,ydf,xff,yff,xdff,ydff,midx,y,midy,oldx,oldy;
int x1,y1,x2,y2 ;
float b1,b2;
float t,deg;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"..\\bgi");
      r=0;

//setbkcolor(15);
//setcolor(0);
midx=getmaxx()/2;midy=getmaxy()/2;

 xrad=300;yrad=30;
   // ellipse(midx,midy,0,360,xrad,yrad);
     j=4;
 for (i=0; !kbhit(); i++,j++)
  {
  //i=i/20;
 x= midx - (xrad * cos((i * 3.14) / 180));
 y = midy - (yrad * sin((i * 3.14) / 180));

 //  line(x,y,200,200);
 //putpixel(x,y,12);

 line(midx,midy,x,y);

  xd= midx - (xrad * cos((j * 3.14) / 180));
 yd = midy - (yrad * sin((j * 3.14) / 180));
 line(midx,midy,xd,yd);

 line(xd,yd,x,y);







	{
	 xf= midx - (xrad * cos(((i+120) * 3.14) / 180));
 yf = midy - (yrad * sin(((i+120) * 3.14) / 180));

 //  line(x,y,200,200);
 //putpixel(x,y,12);

 line(midx,midy,xf,yf);

  xdf= midx - (xrad * cos(((j+120) * 3.14) / 180));
 ydf = midy - (yrad * sin(((j+120) * 3.14) / 180));
 line(midx,midy,xdf,ydf);

 line(xdf,ydf,xf,yf);

	}




	{
	 xff= midx - (xrad * cos(((i-120) * 3.14) / 180));
 yff = midy - (yrad * sin(((i- 120) * 3.14) / 180));

 //  line(x,y,200,200);
 //putpixel(x,y,12);

 line(midx,midy,xff,yff);

  xdff= midx - (xrad * cos(((j-120) * 3.14) / 180));
 ydff = midy - (yrad * sin(((j-120) * 3.14) / 180));
 line(midx,midy,xdff,ydff);

 line(xdff,ydff,xff,yff);

	}














































 delay(22);
 cleardevice();
  // if(r!=0)
   //line(oldx,oldy,x,y);

  // oldx=x;
  // oldy=y;
// putpixel(x,y,12);
//r++;
 }
 // ellipse(midx,midy+45,0,360,xrad,yrad);


getch();
}