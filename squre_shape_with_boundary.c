#include <stdio.h>

main()
{
  int i,j;
  int n;

  scanf("%d",&n);
  for(i=1; i<=n; i++){/*line-count
    outer-loop*/
    for(j=1; j<=n; j++){
      if(i==1 || i==n){
        printf("*");
      }
      else{
        if(j==1 || j==n){
          printf("*");
        }else{
          printf(" ");
        }
      }
    }
    printf("\n");
  }
}
