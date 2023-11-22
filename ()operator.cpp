#include<iostream>
using namespace std;
/*1 : constructor, Complex cc;, return cc;, int main() part


*/
class Complex
{
   int r,i,real,img;
   public:
      void getdata()
      {
         cout<<"\n\nEnter real & img : ";
         cin>>r>>i;
      }
      void putdata()
      {
         cout<<"\nreal : "<<r<<"\nimg : "<<i;
      }

Complex(int r=0,int w=0)                 //used to initialise some useful values for an object's data members.
   {  
      real=r;
      img=w;
   }

   Complex operator + (Complex bb)
   {
      Complex cc;
      cc.r = r + bb.r;
      cc.i = i + bb.i;
      return cc;
   }

   Complex operator * (Complex bb1)
   {
      Complex cc1;
      cc1.r = r * bb1.r;
      cc1.i = i * bb1.i;
      return cc1;
   }
};

int main()
{
   Complex aa,bb,cc,aa1,bb1,cc1;
   aa.getdata();
   bb.getdata();
   aa.putdata();
   bb.putdata();
   cc= aa + bb;
   cout<<"\naddition is : ";
   cc.putdata();

   aa1.getdata();
   bb1.getdata();
   cc1= aa1 * bb1;
   aa1.putdata();
   bb1.putdata();
   cout<<"\nmultiplication is : ";
   cc1.putdata();
   return 0;
}
