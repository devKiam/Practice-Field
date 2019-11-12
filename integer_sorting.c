#include <stdio.h>

main()
{
  int a[99];
  int temp,i,j,n;
  printf("How many numbers do you wanna enter?\n");
  scanf("%d",&n);

  printf("\nEnter array values:\n");
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
  printf("Sorted array values in accending form:\n");
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  for(i=0; i<n; i++){
    printf("%d\n",a[i]);
  }

}
