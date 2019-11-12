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
    space--;
    for(j=1; j<=((i*2)-1); j++){
      /*if-else
      condition for inside spaces*/
      if(i==1 || i==n){
        printf("*");
      }
      else{
        if(j==1 || j==((i*2)-1)){
          printf("*");
        }
        else{
          printf(" ");
        }/*another if-else condition
        for measuring
        first and last position where * will be printed*/
      }
    }
    printf("\n");
  }
}
