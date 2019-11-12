#include <iostream>
#include <stdio.h>
using namespace std;

class test
{
private://access specifier
  int id;
  char name[20];
  double fee;
public:
  void get();//member-function
};
void test::get()
{
  cout<<"Enter Id,Fee,Name respectively: ";
  cin>>id>>fee;
  getline(cin,name);

  cout<<"\nId = "<<id;
  cout<<"\nName = "<<name;
  cout<<"\nFee = "<<fee;
}

main()
{
  test student;//student is class variable/object
  student.get();
}

