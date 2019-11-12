#include <stdio.h>
#include <stdlib.h>
main()
{
    int *a;
    int i,j,temp,n;

    printf("How many integer?\n");
    scanf("%d",&n);
    printf("Enter integers:\n");
    for(i=0; i<n; i++){
        scanf("%d",a+1);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(*(a+i) > *(a+j)){
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    printf("sorted:\n");
    for(i=0; i<n; i++){
        printf("%d ",*(a+i));
    }
}
