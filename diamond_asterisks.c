#include <stdio.h>

main()
{
    int i,j,n,s=1,space;

    printf("n?\n");
    scanf("%d",&n);
    space=n-1;

    for(i=1; i<n*2; i++){
        for(j=1; j<=space; j++){
            printf(" ");
        }
        for(j=1; j<s*2; j++){
            printf("*");
        }
        printf("\n");
        if(i<n){
            space--;
            s++;
        }
        else{
            space++;
            s--;
        }
    }
}
