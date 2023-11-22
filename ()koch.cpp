/*   Write C++ program to generate fractal patterns by using Koch curves   */

#include <iostream>
#include <math.h>
#include <graphics.h>
using namespace std;
class kochCurve
{
public:
void koch(int it,int x1,int y1,int x2,int y2)
{
int x,y,x3,y3,x4,y4;
int dx,dy;
if (it==0)
{
line(x1,y1,x2,y2);
}
else
{
delay(10);

dx=(x2-x1)/3;
dy=(y2-y1)/3;

x=x1+dx;
y=y1+dy;

x3=(int)(0.5*(x1+x2)+sqrt(3)*(y1-y2)/6);      //sqrt = return the square root of a number (3)= 1.73
y3=(int)(0.5*(y1+y2)+sqrt(3)*(x2-x1)/6);

x4=2*dx+x1;
y4=2*dy+y1;


koch(it-1,x1,y1,x,y);
koch(it-1,x,y,x3,y3);
koch(it-1,x3,y3,x4,y4);
koch(it-1,x4,y4,x2,y2);
}
}
};
int main()
{
kochCurve k;

int it;
cout<<"Enter Number Of Iterations : "<<endl;
cin>>it;

int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);

k.koch(it,200,300,400,300);
k.koch(it,400,300,300,120);
k.koch(it,300,120,200,300);

getch();
delay(10000);
closegraph();
return 0;
}
