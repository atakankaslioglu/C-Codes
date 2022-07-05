/*Question 2
ID: 090180731
Name: Atakan
Lastname: Kaslioglu*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void user_defined_function(int *Ptr,int size,double *norm,int *even);
int main ()
{
int n,i,*array,evn;
double nrm;
srand(time(NULL));
printf ("Enter arrays size : ");
scanf("%d",&n);
array=(int*)calloc(n,sizeof(int));
 if(array!=NULL){
for (i=0;i<n;i++)
{
*(array+i)=10+rand()%991;
printf("%d\n",*(array+i));
}
user_defined_function(array,n,&nrm,&evn);
printf("Norm = %.3lf\nNumber of How Many Elements are Even = %d",nrm,evn);
free(array);
}
else
{
printf("An error occured.");
exit(0);
}
return 0;
}

void user_defined_function(int *Ptr,int size,double *norm,int *even)
{
int i,sum=0;
for(i=0;i<size;i++)
{
sum+=pow(*(Ptr+i),2);
}
*norm=sqrt(sum);
*even=0;
for(i=0;i<size;i++)
{
if (*(Ptr+i)%2==0)
*even=*even+1;
}
return;
}

