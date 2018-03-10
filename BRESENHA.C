
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<graphics.h>
void main()
{



int i,j,gd,gm,x,r,y,xc,yc,p;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);





printf("\n Enter the center of the circle :");
scanf("%d%d",&xc,&yc);


printf("\n Enter the value of r :");
scanf("%d",&r);

p=(5/4)-r;
x=0;y=r;
while(x<=y)
{
putpixel(xc+x,yc+y ,12);
putpixel( xc+y,yc+x,12);
putpixel(xc-x,yc+y ,12);
putpixel( xc+y,yc-x,12);

putpixel(xc-x,yc-y ,12);
putpixel( xc-y,yc-x,12);
putpixel(xc+x,yc-y ,12);
putpixel( xc-y,yc+x,12);

if(p<0)
p+=2*x+1;
else
  {
  y-=1;
  p+=2*x+1-2*y+1;
  }

  x++;


 delay(33);

}

getch();
closegraph();
}
