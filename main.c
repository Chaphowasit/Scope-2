#include<stdio.h>
#include<stdlib.h>
//atoi atof

int main(int argc,char *argv[])
{  int *a,i;
int sum = 0; //agrv -> agrv

a= (int *)malloc(sizeof(int)*(argc-1));

      for(int i =1;i<argc;i++)
     {
     a[i-1] = atoi(argv[i]);

     printf("argv %d = %d \n",i,a[i-1]);
     }
      //printf("%d \n",atoi(*(argv+i)));

      for(int i =1;i<argc;i++)
      {if((a[i-1]%2)!=0) {printf("%d \n",a[i-1]);
      sum = sum + a[i-1];}
      }

      printf("Sum = %d ",sum);
}