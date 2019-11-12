#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *fp;
  FILE *fpout;
  char i[99],a;

  fp=fopen("E:/Documents/C/TEST.DAT","w");
  printf("Enter string: ");
  gets(i);
  fprintf(fp,"%s",i);

  fclose(fp);

  fpout=fopen("E:/Documents/C/TEST.DAT","r");
  printf("Inside File: ");
  for( ;fscanf(fpout,"%c",&a)!= EOF; ){
    printf("%c",a);
  }
  fclose(fpout);
}
