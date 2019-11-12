#include <stdio.h>
//using recursion
void bin(int a)
{
  if(a==0){
  return;
  }
  bin(a/2);
  printf("%d",a%2);
}

main()
{
  int a;

  printf("Decimal: ");
  scanf("%d",&a);
  bin(a);
}
