//Game Time with Minutes(URI)
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

main()
{
  int hr1,min1,hr2,min2,min,hr;
  int temp1,temp2;

  cin>>hr1>>min1>>hr2>>min2;

  if(hr2==hr1 && min2<=min1){
    hr2+=24;
    if(min2<min1){
      min2+=60;
    }
  }
  else{
    if(min2<min1){
      min2+=60;
      hr2-=1;
    }
    if(hr2<hr1){
      hr2+=24;
    }
  }

  min=abs(min1-min2);
  hr=abs(hr1-hr2);
  cout<<"O JOGO DUROU "<<hr<<" HORA(S) E "<<min<<" MINUTO(S)";
}
