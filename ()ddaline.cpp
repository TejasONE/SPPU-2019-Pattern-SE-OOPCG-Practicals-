#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void DDAline(int x1,int y1,int x2, int y2,int icolour)     //no class
{
	int i;
	float dx,dy,steps,Xinc,Yinc,x,y;

	dx=(x2-x1);
	dy=(y2-y1);

	if(fabs(dx)>fabs(dy))
	{
	 steps=fabs(dx);
	}
	else
	{
	 steps=fabs(dy);
	}

	Xinc=dx/steps;
	Yinc=dy/steps;
	
	for (i=0;i<steps;i++)
	{
	  putpixel(floor(x1),floor(y1),icolour);      //plot a pixel at location (x,y) of specified color
	  x1 = x1 + Xinc;                               //return an integer value that is less than or equal to argumrnt floor(3.78) --> (3)
	  y1 = y1 + Yinc;
	}
}
int main()
{

int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,NULL);

DDAline(50,50,200,200,YELLOW);                        //window vertical = 470 , horizontal = 630
//DDAline(200,200,100,200,YELLOW);
//DDAline(100,200,150,150,YELLOW);

delay(5000);
closegraph();
return 0;
}
