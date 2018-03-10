#include<graphics.h>
#include<conio.h>
#include<stdio.h>



   void lf(int xx,int yy,int cc)
   {

	  {
	   cc=10;
    setcolor(cc);
    setfillstyle(8,cc);

	  circle(xx+155,yy+170,15);
	  floodfill(xx+150,yy+170,cc);
	   circle(xx+130,yy+170,15);
	   floodfill(xx+130,yy+170,cc);
	   circle(xx+174,yy+170,10);
	   floodfill(xx+174,yy+170,cc);
	 circle(xx+112,yy+170,9);
	 floodfill(xx+112,yy+170,cc);
	circle(xx+193,yy+165,13);
	floodfill(xx+193,yy+165,cc);
	 circle(xx+155,yy+150,15);
	 floodfill(xx+155,yy+150,cc);
	   circle(xx+130,yy+150,15);
	   floodfill(xx+130,yy+150,cc);
	   circle(xx+174,yy+150,10);
	   floodfill(xx+174,yy+150,cc);
	 circle(xx+112,yy+150,9);
	 floodfill(xx+112,yy+150,cc);
	circle(xx+193,yy+155,13);
	floodfill(xx+193,yy+145,cc);
	circle(xx+107,yy+163,9);
	floodfill(xx+100,yy+163,cc);

	  }



   }


void tree(int x,int y)
{

{

int c=6;
    setcolor(c);
    setfillstyle(1,c);
    // x=y=0;
 line(x+200,y+370,x+205,y+50);
 line(x+215,y+370,x+210,y+50);
	   line(x+215,y+370,x+200,y+370);
	   line(x+205,y+50,x+210,y+50);

    line(x+203,y+240,x+155,y+170);
    line(x+203,y+230,x+155,y+162);
	    line(x+155,y+162,x+155,y+170);

 line(x+210,y+200,x+265,y+130);
 line(x+210,y+190,x+265,y+124);
	    line(x+265,y+124,x+265,y+130);

	   line(x+205,y+100,x+155,y+50);
	  line(x+205,y+90,x+155,y+42);
	    line(x+155,y+42,x+155,y+50);


	   line(x+209,y+80,x+265,y+40);
	    line(x+208,y+70,x+265,y+34);
	     line(x+265,y+34,x+265,y+40);

 //
  floodfill(211+x,260+y,c);
//
floodfill(255+x,44+y,c);
//
floodfill(157+x,48+y,c);
//
floodfill(157+x,168+y,c);
//
floodfill(263+x,129+y,c);

//putpixel(,c);


lf(x+0,0+y,10) ;
lf(x+115,-20+y,10) ;
lf(x+20,-105+y,10) ;
lf(x+100,-125+y,10) ;
lf(x+70,-130+y,10) ;

}

}



void hous()
{

      int c=3;
 setcolor(c);
 setfillstyle(1,c);

	   line(90,355,180,337);
	   line(180,294,180,337);
	   line(90,355,90,290);
	   line(90,290,180,294);
      floodfill(95,300,c);




       c=6;
 setcolor(c);
 setfillstyle(1,c);



   c=0;
 setcolor(c);
 setfillstyle(1,c);

	line(3,295,50,235);
	     line(3,295,13,295);
	       line(13,295,54,242);
		      line(50,235,54,242);
			//
			floodfill(11,293,c);
			//
			floodfill(50,241,c);
   c=6;
 setcolor(c);
 setfillstyle(1,c);



line(100,305,50,235);
line(140,245,50,235);
line(140,245,190,295);
line(100,305,190,295);
 floodfill(98,300,c);


    c=14;
 setcolor(c);
 setfillstyle(1,c);
 line(13,295,13,340);
 line(90,355,13,340);
line(90,355,90,290);


  line(13,295,54,242);
   line(90,290,54,242);

//
floodfill(20,292,c);
  c=0 ;
setcolor(c);
setfillstyle(1,c);

 line(83,354,83,290);
 line(63,288,83,290);
  line(63,288,63,351);
   line(63,288,75,293);
      line(75,352,75,293);

     line(75,352,83,354);
  //
  floodfill(81,350,c);

  c=8 ;
setcolor(c);
setfillstyle(5,c);
   line(63,288,75,293);
      line(75,352,75,293);
      line(63,288,63,351);
  line(75,352,63,351);
 //
 floodfill(65,342,c);


  c=9 ;
setcolor(c);
setfillstyle(5,c);
 line(23,293,55,292);
  line(55,315,55,292);
   line(55,315,23,313);
   line(23,293,23,313);
floodfill(25,300,c);

}



void munt()
{


 int   c=9;
 setcolor(c);
 setfillstyle(2,c);
 rectangle(0,0,0,260);
 floodfill(2,2,c);



       c=10;
 setcolor(c);


 setfillstyle(1,c);
     line(0,260,0,190);
      line(140,250,0,190);

      line(0,260,getmaxx(),260);
      line(10,250,200,200);
      line(300,250,200,200);
       line(290,257,400,180);
       line(getmaxx()-10,250,400,180);
	 line(getmaxx(),260,getmaxx(),200);
	 line(getmaxx()-159,250,getmaxx(),200);

     floodfill(4,258,c);


}

void main()
{



int i,j,gd,gm,q,w,e,r,t,x,y,u,o,p,c;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");






munt();



 c=12;
 setcolor(c);
 setfillstyle(1,c);
circle(250,90,30);
floodfill(250,90,c);

c=2;
 setcolor(c);

for(i=0;i<getmaxx();i+=28)
{
 setfillstyle(8,c);
circle(i,257,15);
circle(getmaxx(),257,15);
  floodfill(i,258,c);
//  if(kbhit())
//  break;

}  floodfill(getmaxx(),258,c);

   c=1;
 setcolor(c);
 setfillstyle(1,c);
rectangle(0,260,getmaxx(),getmaxy());
  floodfill(2,263,c);


{

   c=8;
 setcolor(c);
 setfillstyle(1,c);

 line(200,getmaxy(),400,346);
    ellipse(200,325,325,540,224,50);
 line(200,getmaxy(),0,getmaxy());
 line(0,300,0,getmaxy());

 floodfill(200,325,c);

}

      tree(-148,-30);


hous();

 tree(99,-40);

tree(0,0);



  setcolor(10);
settextstyle(4,0,2);
outtextxy(getmaxx()-100,getmaxy()-25," NR jith");


getch();
closegraph();
}