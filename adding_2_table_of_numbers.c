#include <stdio.h>

main()
{
  int a[99][20],b[99][20];
  int i,j,r,c;

  printf("Enter two squre matrix\n"
         "How many rows?\n");
  scanf("%d",&r);
  printf("How many columns?\n");
  scanf("%d",&c);

  printf("1st matrix's co-efficients:\n");
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("2nd matrix's co-efficients:\n");
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      scanf("%d",&b[i][j]);
    }
  }

  printf("Sum\n");
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      printf("%d ",a[i][j]+b[i][j]);
    }
    printf("\n");
  }
}
