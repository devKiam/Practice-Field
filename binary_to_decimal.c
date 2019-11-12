#include <stdio.h>

main()
{
  int n,i,mods,result=0;

  printf("Binary?\n");
  scanf("%d",&n);

  for(i=0; n!=0; i++){
    mods=n%10;
    n/=10;
    result=mods*pow(2,i)+result;
  }
  printf("%d",result);
}
