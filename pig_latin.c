#include <stdio.h>

main()
{
    char pig[80],a[80];
    int words=1,n,i,m1=0,m2; //m1=beginning of word
    //m2=ending of word
    for(i=0; i<80; i++){//initialization
        pig[i]=a[i]=' ';
    }
    printf("String: ");
    for(i=0; a[i-1]!='\n'; i++){
        scanf("%c",&a[i]);
    }

    for(i=0; i<79; i++){
        if(a[i]==' ' && a[i+1]!=' '){
            words++;
        }
    }
    for(n=1; n<=words; n++){
        for(i=m1; a[i]!=' '; ){
            m2=i++;
        }
        for(i=m1; i<m2; i++){
            pig[i+(n-1)]=a[i+1];
        }
        pig[m2+(n-1)]=a[m1];
        pig[m2+n]='a';

        m1=m2+2;
    }
    printf("Pig latin: ");
    for(i=0; i<80; i++){
        putchar(pig[i]);
    }
}
