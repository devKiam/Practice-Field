#include <stdio.h>

main()
{
    int a,i,n,m=1;

    scanf("%d %d",&a,&n);

    for(i=1; i<=n; i++){
        m=m*a;
    }
    printf("%d",m);
}
