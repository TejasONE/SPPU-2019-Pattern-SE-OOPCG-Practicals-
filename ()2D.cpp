#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,NULL);

    cout<<"1.Translation\n2.Rotation\n3.Scaling\n4.Reflection\n5.Shearing   "<<endl;
    cout<<"Selection : ";
    cin>>s;

    switch(s)
        {
        case 1:
            {   int x1,y1,x2,y2;
                int tx,ty;
            
                 cout<<"vertices  : "<<endl;
                cin>>x1;
                 cout<<"vertices  : "<<endl;
                cin>>y1;
                 cout<<"vertices  : "<<endl;
                cin>>x2;
                 cout<<"vertices  : "<<endl;
                cin>>y2;
                 cout<<"factor : "<<endl;
                cin>>tx;
                 cout<<"factor : "<<endl;
                cin>>ty;
                 cout<<"Rectangle before translation"<<endl;
                         
                setcolor(3);
                rectangle(x1,y1,x2,y2);    // (top left and bottom right)
                setcolor(4);
                cout<<"Rectangle after translation"<<endl;
                rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
                getch();                // imp
                break;
            }
        case 2:
            {   long x1=200,y1=200,x2=300,y2=300;
                double a;
                cout<<"Rectangle with rotation"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"Angle of rotation:";
                cin>>a;
                a=(a*3.14)/180;
                long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
                long yr=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
                setcolor(2);
                rectangle(x1,y1,xr,yr);
                getch();                       // imp
                break;
}
        case 3: //scalling
            {
                int x1=30,y1=30,x2=70,y2=70, y=2,x=2;
                cout<<"Before scaling"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"After scaling"<<endl;
                setcolor(10);
                rectangle(x1*x,y1*y,x2*x,y2*y);
                getch();                //Return the ASCII value of the character read from stdin
                break;
}
        case 4:  //reflaction
            {
                 int x1=200,y1=300,x2=500,y2=300,x3=300,y3=400;
                 cout<<"triangle before reflection"<<endl;
                 setcolor(3);
                 line(x1,y1,x2,y2);
                 line(x2,y2,x3,y3);
                 line(x3,y3,x1,y1);
                
                 cout<<"triangle after reflection"<<endl;
                 setcolor(5);
                 line(x1,-y1+500,x2,-y2+500);
                 line(x2,-y2+500,x3,-y3+500);
                 line(x3,-y3+500,x1,-y1+500);
                 getch();                          // imp
                 break;
}
        case 5:   //shearing
        {
  int x1=50,y1=50,x2=250,y2=50,x3=250,y3=250,x4=50,y4=250,shx=1.5;
             cout<<"Before shearing of rectangle"<<endl;
             setcolor(3);
             line(x1,y1,x2,y2);
             line(x2,y2,x3,y3);
             line(x3,y3,x4,y4);
             line(x4,y4,x1,y1);
             cout<<"After shearing of rectangle"<<endl;
             x1=x1+shx*y1;
             x2=x2+shx*y2;
             x3=x3+shx*y3;
             x4=x4+shx*y4;
             setcolor(13);
             line(x1,y1,x2,y2);
             line(x2,y2,x3,y3);
             line(x3,y3,x4,y4);
             line(x4,y4,x1,y1);
getch();
}
default:
          {
            cout<<"Invalid Selection"<<endl;
            break;
          }
        }
closegraph();
    return 0;
}