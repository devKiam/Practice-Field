#include <stdio.h>

main()
{
  int a[99][10];
  int i,j,r,c;

  printf("Enter first matrix\n"
         "How many rows?\n");
  scanf("%d",&r);
  printf("How many columns?\n");
  scanf("%d",&c);
  printf("Values:\n");
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      scanf("%d",&a[i][j]);
    }
  }

  printf("After interchange:\n");
  for(i=0; i<c; i++){
    for(j=0; j<r; j++){
      printf("%d ",a[j][i]);
    }
    printf("\n");
  }

}
