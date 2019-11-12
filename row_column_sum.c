#include <stdio.h>

main()
{
  int a[99][99];
  int i,j,r,c,sum=0;

  printf("How many rows: ");
  scanf("%d",&r);
  printf("How many columns: ");
  scanf("%d",&c);

  printf("Enter co-efficients:\n");
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      sum=sum+a[i][j];
    }
    printf("sum of the %d row: %d\n",i+1,sum);
    sum=0;
  }sum=0;
  for(i=0; i<c; i++){
    for(j=0; j<r; j++){
      sum=sum+a[j][i];
    }
    printf("sum of the %d column: %d\n",i+1,sum);
    sum=0;
  }
}
