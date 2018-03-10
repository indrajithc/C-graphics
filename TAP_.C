
#include <stdio.h>
 #include <conio.h>
 #include <graphics.h>
 #include <dos.h>

 int i,j,gd,gm,q,w,e,r,t,y,u,cd,o,p,x,c;






 void tap()
 {

    c=8;
setcolor(c);
setfillstyle(1,c);

setlinestyle(0, 1, 3);

  line(1, 150, 1,getmaxy());
  line(60, 150, 60,getmaxy()-30);
   line(280,getmaxy()-30, 60,getmaxy()-30);
    line(280,getmaxy(),1,getmaxy());
    line(280,getmaxy(),280,getmaxy()-30);

    arc(31,180,45,135,40);
    floodfill(31,180,c);


       c=14;
setcolor(c);
setfillstyle(1,c);
	 circle(130,187,18);
	   floodfill(130,187,c);

 line(60,180,60,195);
    line(60,180,160,180);
     line(60,195,155,195);

     line(175,189,175,212);
     line(160,199,160,212);
    arc(160,195,0,90,16);
     arc(155,200,0,90,5);
       line(175,212,160,212);
      floodfill(110,187,c);
       floodfill(167,210,c);


       setlinestyle(0, 1, 1);



 line(127,180,127,148);
 line(133,180,133,148);
 circle(130,145,6);
  //putpixel
  floodfill(130,160,c);
    floodfill(130,145,c);




 //   line(167,212,167,400);



      c=0;
setcolor(c);
  rectangle(97,320,237,326);

       c=12;
setcolor(c);
setfillstyle(1,c);
   line(127,getmaxy()-32,207,getmaxy()-32);
    line(233,325,207,getmaxy()-32);
     line(127,getmaxy()-32,101,325);
     rectangle(97,320,237,326);
     floodfill(200,333,c);
      floodfill(200,323,c);

      c=0;
setcolor(c);
  rectangle(97,320,237,326);
   c=15;
setcolor(c);
setlinestyle(0, 1, 3);
       ellipse(167,323,180,360,68,100);








 }
 void hdtap()
 {
 setcolor(14);
 setfillstyle(1,14);
	 line(110,143,150,143);
     line(110,146,150,146);
       line(110,146,110,143);
	 line(150,143,150,146);
      //      floodfill(112  ,145,c);
      //      floodfill(148  ,145,c);
     circle(152,144,4);
	circle(108,144,4);
      ///
       floodfill(152,144,14);
    //
	floodfill(108,144,14);

 }



 void drp(int x,int y)
 {
    c=1;
setcolor(c);
setfillstyle(1,c);
 circle(x,y,3);
 line(x-3,y,x,y-8);
 line(x+3,y,x,y-8);
 floodfill(x,y,c);
 }

 void main()

 {


clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);

tap();





//  //
for(i=0,j=0;j<3;i++)
 {
 setcolor(14);
 setfillstyle(1,14);
	 line(110+i,143,150-i,143);
     line(110+i,146,150-i,146);
       line(110+i,146,110+i,143);
	 line(150-i,143,150-i,146);
      //floodfill(112  ,145,c);
      //  floodfill(148  ,145,c);
  //
     circle(152-i,144,4);
 //
	circle(108+i,144,4);

      ///
      floodfill(152-i,144,14);
    //
    floodfill(108+i,144,14);
    if(i==44)
    {
    j++;
    i=0;
    }

       //	 while(!kbhit())
	tap();
     //  hdtap();

    delay(113);
	 cleardevice();
	 }

    i=212;
    cd=9; w=0;
      for(q=7,i=212;!kbhit(); i++ )
      {


	drp(167,i);
       //	drp(164,i-3);
      //	drp(171,i-2);
//setcolor(12);	 line(175,212,160,212);
       tap();
       hdtap();

    delay(33);
	 cleardevice();

	     if(i==332)
	     i=212;
	    }


getch();
closegraph();
}
