#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *fp;
  FILE *fpout;
  int a[100],b[100];
  int i,j,temp;

  fp=fopen("E:/Documents/C/RAND.DAT","w");
  for(i=0; i<100; i++){
    fprintf(fp,"%d ",a[i]=rand()%100);
  }

  fclose(fp);

  fpout=fopen("E:/Documents/C/TEST.DAT","r");
  for(i=0; i<100; i++){
    fscanf(fpout,"%d",&a[i]);
    b[i]=a[i];
  }
  fclose(fpout);

  for(i=0; i<100; i++){
    for(j=i+1; j<100; j++){
      if(b[i]>b[j]){
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;
      }
    }
  }
  for(i=0; i<100; i++){
    printf("%d ",b[i]);
  }
}
