#include <stdio.h>

main()
{
  int a[99][99],b[99][99];
  int i,j,k;
  int r1,c1,r2,c2;
  int sum=0;

  printf("Enter first matrix\n\n"
         "How many rows?\n");
  scanf("%d",&r1);
  printf("How many columns?\n");
  scanf("%d",&c1);
  printf("1st matrix's co-efficients:\n");
  for(i=0; i<r1; i++){
    for(j=0; j<c1; j++){
      scanf("%d",&a[i][j]);
    }
  }

  printf("Enter 2nd matrix\n\n"
         "How many rows?\n");
  scanf("%d",&r2);
  printf("How many columns?\n");
  scanf("%d",&c2);
  if(r2==c1){
    printf("2nd matrix's co-efficients:\n");
    for(i=0; i<r2; i++){
      for(j=0; j<c2; j++){
        scanf("%d",&b[i][j]);
      }
    }
    printf("\n\nResult of multiplication would be:\n");

    for(i=0; i<r1; i++){
      for(j=0; j<c2; j++){
        for(k=0; k<r2; k++){
          sum+=(a[i][k]*b[k][j]);
        }
        printf("%d ",sum);
        sum=0;
      }
      printf("\n");
    }
  }
  else{
    printf("lol! Bye Bye!");
  }
}
