# include <stdio.h>
  # include <conio.h>
  # include <graphics.h>

  void main()
  {
    int dx,dy,x,y,m,x1,y1,x2,y2;
    int gd,gm;

    clrscr();

    printf("\n\n\tEnter the co-ordinates of first point : ");
    scanf("%d %d",&x1,&y1);
    printf("\n\n\tEnter the co-ordinates of second point : ");
    scanf("%d %d",&x2,&y2);
    dx = (x2 - x1);
    dy = (y2 - y1);

    m=(dy) - (dx);

    x = x1;
    y = y1;

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"..\\bgi");
    putpixel(x,y,WHITE);

    while(x <= x2)
    {
      if(m <=1)
      {
	x=x+1;
	y=y+1;

      }
      else
      {
	x=x+(1/m);
	y=y+1;

     }
     putpixel(x,y,10);
     delay(33);
   }
   getch();
   closegraph();
}