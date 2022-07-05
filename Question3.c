/*Question 3
ID: 090180731
Name: Atakan
Lastname:Kaslioglu*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,i;
char str[81],*str2;
printf ("Enter a string : ");
scanf("%s",str);
n=strlen(str);
str2=(char*)calloc(n,sizeof(char));
   if(str2!=NULL)
 {
    for(i=0;i<n;i++)
    {
    str2[(n-1)-i]=str[i];
     }
   printf("String in reverse order = %s",str2);
   free(str2);
 }
    else
  {
   printf("An error occured.");
   exit(0);
  }
return 0;
}
