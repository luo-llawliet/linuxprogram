#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
void showarray(int *a,int n)
{
int i;
for(i=0;i<n;i++)
printf("%4d  :  %4d\n",i,a[i]);

}
void initarray(int *a,int n)
{
int i;
for(i=0;i<n;i++)
{
srand((unsigned)time(NULL));
a[i]=rand();
}
printf("arrayinit compelte");
}
