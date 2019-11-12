#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class stack{
    int stck[5];
    int tos;
public:
    stack() { tos=0; }
    void push(char ch)
    {
        if(tos>=5){
            cout<<"stack is full"<<endl;
            return;
        }
        stck[tos++]=ch;
    }
    char pop()
    {
        if(tos<=0){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return stck[--tos];
    }
};

main()
{
    stack ob1, ob2;
    char ch;

    for(int i=0; i<5; i++){
        cin>>ch;
        ob1.push(ch);
    }
    for(int i=0; i<5; i++){
        cin>>ch;
        ob2.push(ch);
    }

    for(int i=0; i<5; i++) { cout<<ob1.pop()<<" "; }
    cout<<"\n";
    for(int i=0; i<5; i++) { cout<<ob2.pop()<<" "; }
}
