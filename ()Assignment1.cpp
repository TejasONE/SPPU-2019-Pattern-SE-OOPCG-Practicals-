/*Develop a program in C++ to create a database of student’s information system containing the
following information: Name, Roll number, Class, Division, Date of Birth, Blood group,
Contact address, Telephone number, Driving license no. and other. Construct the database with
suitable member functions. Make use of constructor, default constructor, copy constructor,
destructor, static member functions, friend class, this pointer, inline code and dynamic memory
allocation operators-new and delete as well as exception handling.
*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
string name,div,blood,address,dob,h[10];
long long unsigned int rollnumber,telephonenumber,drivinglicensenumber;
public:
void getdata()
{
cout<<"/nEnter name of student "<<endl;
getline(cin,name);

cout<<"Enter address of student "<<endl;
getline(cin,address);

cout<<"Enter roll number of student "<<endl;
cin>>rollnumber;

cout<<"Enter div of student "<<endl;
cin>>div;

cout<<"Enter dob of student "<<endl;
cin>>dob;

cout<<"Enter blood group of student "<<endl;
cin>>blood;

cout<<"Enter telephone number of student "<<endl;
cin>>telephonenumber;

cout<<"Enter driving license number of student "<<endl;
cin>>drivinglicensenumber;


}
void display()
{
cout<<"Name "<<name<<endl;
cout<<"roll no "<<rollnumber<<endl;
cout<<"div "<<div<<endl;
cout<<"dob "<<dob<<endl;
cout<<"blood group "<<blood<<endl;
cout<<"telephone number "<<telephonenumber<<endl;
cout<<"driving license number "<<drivinglicensenumber<<endl;
cout<<"address "<<address<<endl;

}
};
int main ()
{
student obj;
obj.getdata();
obj.display();
return 0;
}

