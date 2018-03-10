

#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
void main()
{



int i,j,gd,x,y,z,c,v,b,n,m,q,w,e,r,t,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

  cleardevice();

   n=1;
   c=0;
for(i=37,q=0,j=37;!kbhit();q++)
{
rectangle(3, 3, getmaxx()-3, getmaxy()-3);
rectangle(1, 1, getmaxx()-1, getmaxy()-1);


rectangle(2, 2, getmaxx()-2, getmaxy()-2);

 //setcolor(n);
 if(0==q%49)
  n++;

  if(n>14)
  n=1;

if(c<getmaxy()-37)
{
i++;
j++;


if(j<getmaxy()-36)
{
j+=2;
x=i;
w=y=j;

}
else if(w>36)
{
e=x=i;
r=y=w;
w-=3;


}
else if(e<getmaxx()-36)
{
e+=2;
t=x=e;
r+=2;
y=r;

}
else if(r<getmaxy()-36)
{
r+=2;
y=r;
t--;
i=x=t;
v=c=r;
}

}
else
{

i--;
v--;
if(i>36)
  {
  i-=3;
    e=x=i;
  y=v;
  }
  else if(e<getmaxx()-36)
  {
  y=v;
  t=x=e;
  e+=4;

  }
  else if(t>36)
  {
  y=v;
  t-=4;
  x=t;
  }
  else
  {
  i=j=37;
  c=0;

  }
  /**/



}

	 setcolor(n);
 setfillstyle( SOLID_FILL,n);
circle(x,y,33);
//circle(x,y,32);
//circle(x,y,19);
 floodfill(x,y,n);
delay(4);

cleardevice();

  }

getch();
closegraph();
}