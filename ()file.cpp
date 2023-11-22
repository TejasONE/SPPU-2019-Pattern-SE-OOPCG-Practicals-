//Write a C++ program that creates an output file, writes information to it, closes the file, open it
//again as an input file and read the information from the file.


#include<iostream>
#include<fstream>                    //........watchout
using namespace std ;


int main () 
{
	int roll_no;
	char name[30];
	char add[50];

	ofstream outf("Student.txt");    //.....output file stream
	
	cout<<"Enter name : ";
	cin.ignore();
	cin.getline(name,30);
	outf<<name<<endl;	                //.......watchout
	
	cout<<"Enter roll number : ";
	cin>>roll_no;
	outf<<roll_no<<endl;             //.....	
	
	cout<<"Enter your address: ";
	cin.ignore();
	cin.getline(add,50);
	outf<<add<<endl;
	
	outf.close();             //.....
	
	ifstream itf;                     //.....input file stream
	itf.open("Student.txt");
	itf>>name;
	itf>>roll_no;
	itf>>add;
	
	itf.close();
	return 0;
}
