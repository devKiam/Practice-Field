#include <stdio.h>
main()
{
  char a[40], b[20];
  int i,length1,length2;

  printf("Enter a string: ");
  gets(a);
  printf("Enter another string: ");
  gets(b);
  length1=strlen(a);
  length2=strlen(b);

  for(i=0; i<length2,b[i]!='\0'; length1++,i++){
    a[length1]=b[i];
  }
  a[length1]='\0'; /*this is because you have to finish the
  string with a null character manually + the value of 'length1'
  increased in the loop*/
  printf("%s",a);
}
