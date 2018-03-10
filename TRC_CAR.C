#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>



void car(int i)
{

int j;
// line(20,388,700,388);
 //line(20,389,700,389);
 //line(20,390,700,390);
	setcolor(12);
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

}



void trfc(int f)
{

	  int c=7;
setcolor(c) ;
setfillstyle(1,c);

line(548,168,572,166);
line(572,166,572,235);
line(572,235,548,232);
line(548,232,548,168);
rectangle(548,168,572,232);
floodfill(550,170,c);


line(570,200,getmaxx(),199);
line(570,201,getmaxx(),200);
line(570,202,getmaxx(),201);
line(570,203,getmaxx(),202);
line(570,204,getmaxx(),203);

line(getmaxx()-3,200,getmaxx()-3,408);
line(getmaxx()-2,200,getmaxx()-2,408);
line(getmaxx()-1,200,getmaxx()-1,408);
line(getmaxx(),200,getmaxx(),408);

//rectangle(570,200,getmaxx(),208);
//floodfill(572,202,c);








if(f==0)
{


   c= 10;
  setcolor(c) ;
setfillstyle(1,c);
circle(560,220,9);
floodfill(560,220,c);
}
if(f==1)
{


   c= 12;
  setcolor(c) ;
setfillstyle(1,c);
circle(560,180,9);
floodfill(560,180,c);
}
if(f==2)
{


   c= 14;
  setcolor(c) ;
setfillstyle(1,c);
circle(560,200,9);
floodfill(560,200,c);
}



 setcolor(0) ;
circle(560,180,9);
circle(560,200,9);
   circle(560,220,9);

setcolor(12);
}


void main()
{



int i,h,j,gd,gm,z,x,c,v,b,n,m;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);



   n=99;
v=m=0;
 // circle(300,200,60);
 // pieslice(300,200,200+i,360+i,j);
 setcolor(12);
h=0;
for(i=-15;!kbhit();i+=2)
{
setcolor(15);
line(0,388,getmaxx()-20,388);

       //	  car(i);

	      if(i>100)
	      {
	      v++;
	      if((v<40)&&(i<142))
	      n=0;

		}
	      if(i==141)
	      {
	      m=1;
	      n=2;
		}



	    if(m==0)
	    trfc(0);
	    else
	       trfc(1);

	     if(n==0)
	     trfc(2);



	  setcolor(15);
    line(20,406,getmaxx(),406);
    rectangle(10,397,100,398);
	rectangle(190,397,280,398);
	    rectangle(370,397,460,398);
	       //	rectangle(550,397,640,398);

		line(480,388,509,406);
		line(480,388,510,406);
		line(481,388,511,406);
		line(482,388,512,406);
	      line(482,388,513,406);



	      car(i);


	       if(i==143)
	       {
		       delay(5000);
		       trfc(2);
		       delay(2000);
		     n=3;
	      m=0;
	       }
	  delay(29);
	  cleardevice();
	  }



getch();
}