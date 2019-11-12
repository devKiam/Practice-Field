#include <stdio.h>
#include <iostream>
using namespace std;

main()
{
  int a[1000],n,temp,pos;

  cin>>n;

  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  temp=a[0];
  pos=0;
  for(int i=1; i<n; i++){
    if(a[i]<temp){
        temp=a[i];
        pos=i;
    }
  }
  printf("Menor valor: %d\nPosicao: %d",temp,pos);
}
