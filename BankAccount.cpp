#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Account
{
  string name;
  int number;
  string type;
  double balance;
public:
  Account(string z, int y, string x, double w)
  {
    name=z;
    number=y;
    type=x;
    balance=w;
  }
  void deposit(int n)
  {
    balance+=n;
  }
  void withdraw(int n)
  {
    cout<<"Current balance: "<<balance<<endl;
    balance-=n;
    cout<<"After withdraw, remaining balance: "<<balance<<endl;
  }
  void name_balance()
  {
    cout<<name;
    cout<<"\nBalance: "<<balance<<endl;
  }
};

main()
{
  string a,c;
  int b;
  double d;

  getline(cin,a);
  cin>>b;
  getchar();
  getline(cin,c);
  cin>>d;

  Account ob1(a,b,c,d);

  ob1.name_balance();
}
