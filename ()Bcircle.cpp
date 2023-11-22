#include<iostream>
//#include<conio.h>
#include<graphics.h>
//#include<math.h>
using namespace std;

void drawCircle(int x, int y, int xc, int yc);     //bcl

int main()
{
	int gd = DETECT, gm;
	int r, xc, yc, d, x, y;
	initgraph(&gd, &gm,"NULL");  

	cout<<"Enter the center co-ordinates\n";  //dont take x values
	cin>>xc>>yc;
	cout<<"Enter the radius of circle\n";
	cin>>r;
	
	d = 3 - 2*r;                         //
	x=0; y = r;                          //
	drawCircle(x,y,xc,yc);               //call

	while(x < y)                         //bqz x always ++
	{
		if(d <= 0) //Negative
		{
			d = d + (4*x) + 6;
			drawCircle(++x,y,xc,yc);
		}
		else
		{
			d = d + (4*(x-y)) + 10;
			drawCircle(++x,--y,xc,yc);
		}
	}

	getch();
	closegraph();
	return 0;
}

void drawCircle(int x, int y, int xc, int yc)     //  def
{
	putpixel( x + xc,  y + yc , YELLOW);       //  (++)(-+)(--)(+-)	       
	putpixel(-x + xc,  y + yc , RED);
	putpixel(-x + xc, -y + yc , GREEN);
	putpixel( x + xc, -y + yc , WHITE);       //  center same

	putpixel( y + xc,  x + yc , BLUE);
	putpixel(-y + xc,  x + yc , BROWN);
	putpixel(-y + xc, -x + yc , CYAN);
	putpixel( y + xc, -x + yc , MAGENTA);
	
}
