#include <stdio.h>

main()
{
  int space;
  int i,j,k,n;

  scanf("%d",&n);
  space=(n-1);

  for(i=1; i<=n; i++){/*line-count
    outer-loop*/
    for(k=1; k<=space; k++){
      printf(" ");
    }
    space--;/*space is the amount that
    decreases with loop by one*/
    for(j=1; j<=((i*2)-1); j++){
      printf("*");
    }
    printf("\n");
  }
}
