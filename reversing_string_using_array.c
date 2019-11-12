#include <stdio.h>

main()
{
  int i,j,lengthA;
  char a[100],b[100];

  printf("Enter string: ");
  gets(a);
  lengthA=strlen(a);

  for(i=0; i<lengthA, a[i]!='\0'; i++,lengthA--){
    b[lengthA-1]=a[i];
  }
  b[i]='\0';
  printf("%s",b);
}
