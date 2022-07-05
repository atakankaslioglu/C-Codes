#include <stdio.h>
#include <math.h>
main ()
{
float a,f,t,s;
printf ("Please enter the principal amount borrowed: \n",a);
scanf("%f,&a");
printf ("Please enter annual interest rate: \n",f);
scanf("%f",&f);
printf ("Please enter the number of payments: \n",t);
scanf("%f,&t");
s=a*pow(1+f/100,t/12);
printf("Total payment: %f",s);

return 0;


}z""
