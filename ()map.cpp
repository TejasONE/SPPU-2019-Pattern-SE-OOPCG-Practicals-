/*Write a program in C++ to use map associative container. The keys will be the names of states
and the values will be the populations of the states. When the program runs, the user is
prompted to type the name of a state. The program then looks in the map, using the state name
as an index and returns the population of the state*/

/*
NOTES:
1 . syntsx: [ map<T1,T2>obj ] Where T1 is key and T2 is value type.
2 . std::map is associative container that store elements in key value combination
3 . where key should be unique, otherwise it overlodes the privious value.
4 . it is implement using self-ballance binary search tree(AVL / red black tree)
5 . generally used in dictionary type problem
*/

#include<iostream>
#include<map>         //watch
#include<iterator>    //watch
#include<string>
using namespace std;
int main()
{
    
map<string,int>populationMap;        // [map<T1,T2>obj]
//populationMap["chotu"] = 6545242;

string name;
int number, n;

cout<<"\n How many states population you want to enter?";
cin>>n; 
cout<<"Enter the name of state and population \n";
    for(int i=0;i<n;i++)
    {
        cin>>name>>number;
        populationMap[name]=number;
    }

//populationMap.insert(pair<string,int>("Maharashtra", 114200000));

map<string,int>::iterator iter;    //Iterator is an object that points to an element inside the container

cout<<"\nPopulation of state";
cout<<"\nSize of population Map:"<<populationMap.size()<<"\n";  //gives size

for(iter=populationMap.begin(); iter!=populationMap.end(); iter++)  //iterator in for loop
{
    cout<<(*iter).first<<":"<<(*iter).second<<"\n";   //basic_string<char>, int> > >::iterator'} has no member named 'first'
}
cout<<"Enter name of state whos population needs to be found: ";
cin>>name;

cout<<"Population of "<<name <<" is " <<populationMap[name];     //key will provide value

populationMap.clear();
}

// obj(populapionMap).size()
// obj(populapionMap).end()
// obj(populapionMap).begin()
// obj(populapionMap).clear()

