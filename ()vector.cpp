/*Write C++ program using STL for sorting and searching user defined records such as Item
records (Item code, name, cost, quantity etc) using vector container.*/

/*
NOTE:
1 . std::vector is a sequence container and also known as dynamic array or array list.
2 . its size can grow and shrink dynamically, and no need to to provide size at complie time.
3 . vector<type>variable_name

ELEMENT ACCESS:
at(), [], front(), back(), data()

MODIFIRES:
insert(), push_back(), pop_back(), swap(), clear(), erase(), resize()
*/











#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Item
{
    public:
    char name[20];
    int quantity;
    int cost;
    int code;

bool operator == (const Item &i1)//search
    {
        return(code==i1.code);           
    }
bool operator < (const Item &i1)//sort
    {
        return (code<i1.code);
    }
};

vector<Item>v1;             //empty vector   //nither in class nor in main()
void print(Item i1);
void display();
void search();
void insert();


void insert()
{
        Item i1;
        cout<<"Enter the Name:";
        cin>>i1.name;
        cout<<"Enter the Quantity:";
        cin>>i1.quantity;
        cout<<"Enter cost:";
        cin>>i1.cost;
        cout<<"Enter code:";
        cin>>i1.code;
        v1.push_back(i1);
}

void display()          //unique
{
        for_each(v1.begin(),v1.end(),print);    //   for_each(Inputiterator first, inputiterator last, Function fn)
}

void print(Item i1)
{
        cout<<"\nName :"<<i1.name;
        cout<<"\nQuantity :"<<i1.quantity;
        cout<<"\nCost :"<<i1.cost;
        cout<<"\nCode :"<<i1.code;
}

void search()
{
        vector<Item>::iterator a;
        Item i1;
        cout<<"\nEnter Item code to be search:";
        cin>>i1.code;
        a=find(v1.begin(),v1.end(),i1);         // set_name.find(element)
        if(a!=v1.end())
            cout<<"Item code is Found";
        else
            cout<<"not Found";
}


int main()
{
    int ch;
    do
    {
        cout<<"\n\n*****MENU*****"<<endl;
        cout<<"1.INSERT"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.SEARCH"<<endl;
        cout<<"4.SORT"<<endl;
        cout<<"5.EXIT"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                sort(v1.begin(),v1.end());
                cout<<"\nSorted items are :";   //w.r.t code
                display();
                break;
            case 5:
                exit(0);
        }
               
    }while(ch!=7);
    return 0;
}
