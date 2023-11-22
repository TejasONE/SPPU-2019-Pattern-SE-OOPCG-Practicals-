#include<dos.h>
#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int main()          //direct main
 {


   int d,m;
   d=DETECT;
   initgraph(&d,&m,NULL);  //initiallizes the graphics driver from disk(ro validing a graphics driver), and putting the system into graphics mode.
   
   float x=1, y=0.0, j=0.5, count=0.1;
   float r=15;
   setcolor(14);
   line(0,215,650,215);
      //Sleep(1);                    //temporarily for a period of time in seconds specified by a perid of time in seconds
    for(int k=0;k<=7;k++)
     {

      for(float i=90;i<270;i+=10)
       {
 y=cos(((i*22/7)/180))/j;

 if(y>0)
 y = -y;
 x += 5;

 setcolor(14);                  //used to set the current drawing color to new color
 setfillstyle(1,14);            //sets the current fill pattern and fill color (pattern, color)
 circle(x,y*100+200,r);         //(x, y, radius)
 floodfill(x,y*100+200,14);     //used to fill an enclosed area(x, y, border_color);

       delay(100);

 setcolor(0);
 setfillstyle(1,0);
 circle(x,y*100+200,r);
 floodfill(x,y*100+200,0);

       }

      j+=count;
      count+=.1;

     }
   getch();     //retuens the ASCII value of the character read from stdin
   return 0;
 }  


