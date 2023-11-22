/*
Problem Statement:
Develop a program in C++ to create a database of students information system containing the
following information: Name, roll number, Class, Division, Date of Birth, Blood group, Contact
address, Telephone number, Driving license no. and other. Construct the database with
suitable member functions. Make use of constructor, default constructor, copy constructor,
destructor, static member functions, friend class, this pointer, inline code and dynamic
memory allocation operators-new and delete as well as exception handling.
*/

#include <iostream>
#include <string.h>
using namespace std;

class PersonClass
{
private:
    string name, clas, div, dob, bloodgrp;
    int roll;

public:
    static int count;
    friend class personClass2;
    
    PersonClass()         //default constructor gets auto.. called when obj of that class get created //to assign values
    {
        name = "";
        clas = "";
        div = "";
        dob = "";
        bloodgrp = "";
        roll = 0;
        roll=count;   //
        cout<<"CONSTRUCTOR IS CALLED\n";
    }
    PersonClass(const PersonClass & obj)      //use of copy constructor //initialize an object using another object of the same type
    {
        roll=obj.roll;
        int sr_no;
        sr_no=count;
        count++;       //
        cout<<"COPY CONSTRUCTOR IS CALLED\n";
    }
    ~PersonClass()         //destructor //to deallocate memory and do other cleanup for class object 
    {
        cout<<"DISTRUCTOR IS CALLED\n";
        count--;      //
    }

    static void TotalRecordCount()
    {
        cout << "\nTotal Number Of Records: " << count << endl;
    }
};

class personClass2
{
private:
    string address, telephone_no, license_no;

public:
    personClass2()
    {
        address = "";
        telephone_no = "";
        license_no = "";
    }
    void getdata(PersonClass *obj);
    void display(PersonClass *obj);
    friend class PersonClass;
};

int PersonClass::count = 0;

void personClass2::display(PersonClass *obj)
{
    cout << "roll No: ";
    cout << obj->roll << endl;      //obj-> used because 'roll' was not declared in this scope;
    cout << "Name: ";
    cout << obj->name << endl;      //obj-> used because 'name' was not declared in this scope;
    cout << "Class: ";
    cout << obj->clas << endl;
    cout << "Division: ";
    cout << obj->div << endl;
    cout << "Date Of Birth: ";
    cout << obj->dob << endl;
    cout << "Blood Group: ";
    cout << obj->bloodgrp << endl;
    cout << "Address: ";
    cout << this->address << endl;     //without this same output
    cout << "Telephone Number: ";
    cout << this->telephone_no << endl;
    cout << "Driving License Number: ";
    cout << this->license_no << endl;

}

void personClass2::getdata(PersonClass *obj)
{
    cout << "roll No: ";
    cin >> obj->roll;
    cout << "Name: ";
    cin >> obj->name;
    cout << "Class: ";
    cin >> obj->clas;
    cout << "Division: ";
    cin >> obj->div;
    cout << "Date Of Birth: ";
    cin >> obj->dob;
    cout << "Blood Group: ";
    cin >> obj->bloodgrp;
    cout << "Address: ";
    cin >> this->address;    //A pointer accessible only within the nonstatic member function of class, struct, or union type.
    cout << "Telephone Number: ";
    cin >> this->telephone_no;
    cout << "Driving License Number: ";
    cin >> this->license_no;
    obj->count++;
    try                                          //use of exception handling concept
    {
        if (obj->roll>70)
            throw obj->roll;
    }
    catch(int)
    {
        cout<<"\nroll no cant be greater than 70\nEnter roll no again ";
        cin>>obj->roll;
    }
}

int main()
{

    personClass2 *p1[20];
    PersonClass *p2[20];
    int n = 0, choice;
    char ans;
    do
    {
        cout << "Menu" << endl;
        cout << "1) enter student Data\n"
             << "2) Display student Data\n"
             << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "------Enter Details------" << endl;
            do
            {
                p1[n] = new personClass2;
                p2[n] = new PersonClass;
                p1[n]->getdata(p2[n]);
                n++;
                PersonClass::TotalRecordCount();
                cout << "\nDo you want to add more records(y/n)? ";
                cin >> ans;
            } while (ans == 'y' || ans == 'Y');
            break;
        case 2:
            cout << "\n*******************Displaying Data**********************" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "\tRecord " << i + 1 << endl;
                p1[i]->display(p2[i]);
            }
             for (int i = 0; i < n; i++)
            {
                delete p1[i];
            }
            break;

        default:
            break;
        }
        cout << "\nDo you want to go to main menu(y/n)? ";
        cin >> ans;
        cin.ignore(1, '\n');
    } while (ans == 'y' || ans == 'Y');
    
    return 0;
}

