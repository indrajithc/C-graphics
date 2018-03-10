#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>

 int i,j,gd,v,gm,midx,midy,jk,c,x,y,xrad,yrad,r;




 void drw(int i,int midx,int midy,int xrad,int yrad, int c,int r)
 {

 setcolor(15);
   ellipse(midx,midy,0,360,xrad,yrad);

 x= midx - (xrad * cos(((i+16) * 3.14) / 180));
 y= midy - (yrad * sin(((i+16 )* 3.14) / 180));


 setcolor(c);

 setfillstyle(1,c);

 circle(x,y,r);

floodfill(x,y,c) ;
 }











void main()
{



clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);

     midy=getmaxy()/2;
midx=getmaxx()/2;

  for (i = 360,j=0;!kbhit(); i-=4,j++)
  {

   for(jk=0;jk<100;jk++)
   putpixel(random(getmaxx()),random(getmaxy()),15);

	       xrad=70;
	       yrad=15;
	       drw(i+j,midx,midy,xrad,yrad,12,13);


		   xrad=105;
		   yrad=30;
		   drw(i,midx,midy,xrad,yrad,4,10);


	      xrad=140;
	      yrad=45;
	      drw(i+(.5*j),midx,midy,xrad,yrad,10,14);




	      xrad=175;
	      yrad=60;
	      drw(i+2*j,midx,midy,xrad,yrad,5,12);


	      xrad=210;
	      yrad=75;
	      drw(i+.25*j,midx,midy,xrad,yrad,13,15);


	      xrad=245;
	      yrad=90;
	      drw(i+j,midx,midy,xrad,yrad,11,19);



	      xrad=280;
	      yrad=105;
	      drw(i+.27*j,midx,midy,xrad,yrad,9,14);


	      xrad=315;
	      yrad=125;
	      drw(i,midx,midy,xrad,yrad,6,8);




   setcolor(14);
   setfillstyle(1,14);
   circle(midx,midy,15);
   floodfill(midx,midy,14) ;

 delay(31);
 cleardevice();



   }

getch();
closegraph();
}





