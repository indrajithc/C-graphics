#include<graphics.h>
#include<conio.h>
#include<dos.h>#include<stdio.h>
void main()
{



int i,j,gd,gm;

int h=0;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);




 // circle(300,200,60);
 // pieslice(300,200,200+i,360+i,j);
 setcolor(12);
for(i=0;!kbhit();i++)
{

 line(20,388,700,388);
 line(20,389,700,389);
 line(20,390,700,390);

     line(8+i,380,23+i,380);
     line(69+i,380,220+i,380);
       line(268+i,380,333+i,380);


  arc(40+i,400,65,111,90);
   arc(80+i,348,156,204,80);
   arc(134+i,202,244,300,130);
     arc(225+i,400,65,110,89);
     line(263+i,320,345+i,357);
      line(345+i,357,333+i,380);

       arc(155+i,345,148,160,86);
	 arc(123+i,350,25,50,85);
	 arc(150+i,422,79,118,140);
	 line(101+i,326,112+i,289);

	  circle(45+i,355,33);
	  circle(244+i,355,33);
	  circle(45+i,355,27);
	  circle(244+i,355,27);
	   for(j=0;j<12;j++)
	   {
	    circle(45+i,355,j);
	  circle(244+i,355,j);
	     }


	   pieslice(45+i,355,1-i,13-i,27);
	    pieslice(45+i,355,121-i,133-i,27);
	    pieslice(45+i,355,241-i,253-i,27);


	    pieslice(244+i,355,1-i,13-i,27);
	    pieslice(244+i,355,121-i,133-i,27);
	    pieslice(244+i,355,241-i,253-i,27);

	    //setbkcolor(15);
		 setfillstyle( SOLID_FILL,12);
		    floodfill(9+i,360,12);
	  delay(9);
	  cleardevice();
	  }



getch();
}