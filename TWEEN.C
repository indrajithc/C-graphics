
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
     int d;
void tween(int x1,int y1,int x2,int y2,int xx1,int yy1,int xx2,int yy2,int c)
{

int mdx1,mdy1,mdx2,mdy2;
if(d==0)return;
  if(c>0)
  {

mdx1=(x1+x2)/2;
mdy1=(y1+y2)/2;
mdx2=(xx1+xx2)/2;
mdy2=(yy1+yy2)/2;
setcolor(15);
line(x1,y1,x2,y2);
line(xx1,yy1,xx2,yy2);
setcolor(12);

  --c;
  --c;
    d--;
    line(mdx1,mdy1,mdx2,mdy2);
     tween(x1,y1,mdx1,mdy1,xx1,yy1,mdx2,mdy2,c);

      tween(x2,y2,mdx1,mdy1,xx2,yy2,mdx2,mdy2,c);

    }

}
void main()
{



int i,j,gd,gm,  x1,  y1,  x2,  y2,  xx1,  yy1,  xx2,  yy2 ,c;
float m;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//line(100,100,200,200);
d=0;
printf("enter the first line");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
printf("enter the 2 line");
scanf("%d%d%d%d",&xx1,&yy1,&xx2,&yy2);

printf("enter the number of objects");
scanf("%d",&c);
d=c;
tween(x1,y1,x2,y2,xx1,yy1,xx2,yy2,c);
getch();
closegraph();
}