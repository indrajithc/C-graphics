
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>

int i,j,gd,gm,xx,q,r,t,o,u,xy ;
void drow(int x,int y)
{
 int c,w,e;

rectangle(1,1,getmaxx()-3,getmaxy()-3);
  {c=8;
  setcolor(c);
 //

setfillstyle(5,c);


    line(x+176,y+110,x+335,y+212);
      line(x+176,y+110,x+250,y+220);
       line(x+335,y+212,x+250,y+220);
      floodfill(x+253,y+218,c);

       line(x+176,y+140,x+315,y+228);
     line(x+176,y+140,x+240,y+255);
       line(x+315,y+228,x+240,y+255);
       floodfill(x+243,y+253,c);


       line(x+176,y+170,x+285,y+248);
       line(x+176,y+170,x+230,y+265);
       line(x+285,y+248,x+230,y+265);
       floodfill(x+233,y+263,c);

  }
	c=6;
 {
 setcolor(c);
 //

setfillstyle(1,c);
line(x,y+340,x+180,y+340);
line(x+240,y+279,x+180,y+340);

line(x+240,y+279,x+340,y+210);
line(x+240,y+275,x+340,y+210);


arc(x+80,y+285,186,215,97);

arc(x+90,y+4,250,300,310);


 line(x+30,y+310,x+35,y+100);
  line(x+36,y+310,x+35,y+100);

 line(x+110,y+320,x+115,y+80);
  line(x+116,y+320,x+115,y+80);

   line(x+170,y+320,x+175,y+100);
  line(x+176,y+320,x+175,y+100);




 //
 floodfill(x+10,y+330,c);
 //
 setfillstyle(2,c);
   //
   floodfill(x+35,y+290,c);
  //
  floodfill(x+115,y+290,c);
  //
   floodfill(x+175,y+290,c);
    }

    {
    c=8;
  setcolor(c);
 //,;

  for(q=2,w=x, e=y;q>0;q--,w-=75,e+=10)
  {

setfillstyle(6,c);
    line(w+95,e+101,w+135,e+100);
    arc(w+48,e+115,330,377,50);
    arc(w+88,e+115,330,377,50);
     arc(w+113,e+185,63,115,50);
     floodfill(w+100,e+108,c);

     line(w+91,e+141,w+135,e+140);
    arc(w+43,e+160,300,380,51);
     arc(w+90,e+170,320,394,52);
       arc(w+100,e+252,316,474,60);
       floodfill(w+103,e+145,c);

     line(w+70,e+204,w+135,e+203);

      arc(w+40,e+250,300,420,55);

     line(w+70,e+295,w+150,e+290);
    floodfill(w+77,e+294,c);

   }
      line(x+215,y+286,x+115,y+80);
    line(x+215,y+286,x+35,y+100);
      line(x+215,y+286,x+175,y+100);
       line(x+145,y+308,x+175,y+100);
	line(x+145,y+308,x+35,y+100);
	line(x+145,y+308,x+115,y+80);
      line(x+85,y+313,x+115,y+80);
	   line(x+85,y+313,x+35,y+100);
	    line(x+85,y+313,x+175,y+100);
      }
		  c=1;
      setcolor(c);

setfillstyle(1,c);
      for(u=o=0;u<getmaxx();u+=70)
{

ellipse(u,333,80,180,40,8) ;
ellipse(u+10,333,90,360,20,8) ;
}
   //
   floodfill(20,380,c);
}


void drowbk(int g)
{


setcolor(g);
setfillstyle(1,g);
rectangle(1,1,getmaxx()-3,getmaxy()-3);


for(u=o=0;u<getmaxx();u+=70)
{

ellipse(u,333,80,180,40,8) ;
ellipse(u+10,333,90,360,20,8) ;
}

 floodfill(5,5,g);

}


void sun(int uu,int oo,int s)
{

  setcolor(s);
  setfillstyle(1,s);

 //for(u=o=0;o<400;o+=1,u++)
 {
 circle(uu,oo,32);
 }
 floodfill(uu,oo+2,s);

}
void main()
{

int k,l,f;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//

  xx=xy=19;




k=l=xy=0;

     r=1;
   while(!kbhit())
   {

if(r<7)
xy+=1;
else if(r>7)
xy-=1;
if(r==13)
r=0;
r++;
f=12;
 j=14;
 if(k>345)
 {
f= j=0;
  }
drowbk(j);
sun(k,l,f);
setcolor(0);
drow(xx,xy);

setcolor(10);
settextstyle(4,0,2);
outtextxy(getmaxx()-100,getmaxy()-25," NR jith");

      delay(100);
	cleardevice();
   xx++;
   k+=2;l+=2;
   }



getch();
closegraph();
}
