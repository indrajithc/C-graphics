#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>





void drawEllipse(float xc, float yc, float x, float y)
{
 putpixel(xc+x, yc+y, RED);
putpixel(xc-x, yc+y, RED);
putpixel(xc+x, yc-y, RED);
putpixel(xc-x, yc-y, RED);
}
void main()
{
  float xc, yc, rx, ry;
  float rxSq,rySq,x,y,p,px,py;
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "c:\\turboc3\\bgi");
 printf("\nEnter the center coordinates of ellipse: ");
  scanf("%f %f", &xc, &yc);
    printf("\nEnter x-radius coordinate: ");
      scanf("%f", &rx);
       printf("\nEnter y-radius coordiante: ");
       scanf("%f", &ry);


  {
  rxSq = rx * rx;
     rySq = ry * ry;
      x = 0;
      y = ry;
     px = 0 ;
     py = 2 * rxSq * y;


 drawEllipse(xc, yc, x, y);


 while (px < py)
  {
    x++;
   px = px + 2 * rySq;

  if (p < 0)
    p = p + rySq + px;
    else
    {
   y--;
    py = py - 2 * rxSq;
       p = p + rySq + px  - py;
	 }

  drawEllipse(xc, yc, x, y);
   delay(30);
    }

 while (y > 0)
  {
    y--;
     py = py - 2 * rxSq;

  if (p > 0)
   p = p + rxSq - py;

  else
   {
      x++;
	px = px + 2 * rySq;
	  p = p + rxSq - py + px;
	    }
  drawEllipse(xc, yc, x, y);
    delay(30);
   }
  }


 getch();
  }


