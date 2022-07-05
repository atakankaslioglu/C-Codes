/*Question 4
ID: 090180731
Name: Atakan
Lastname: Kaslioglu*/
#include <stdio.h>
#include <ctype.h>
enum {SUCCESS,FAIL
};

int main ()
{
int reval=SUCCESS;
FILE *fptr,*fptr1;
char filename[]="source.txt";
char filename1[]="results.txt";
int c;
if((fptr=fopen(filename,"r"))==NULL)
{
printf("An error occured.");
reval=FAIL;
}
else if((fptr1=fopen(filename1,"w"))==NULL)
{
printf ("An error occured.");
reval=FAIL;
}

else{
while(!feof(fptr))
{
c=fgetc(fptr);
c=tolower(c);
if(c==EOF)
break;
else
fputc(c,fptr1);
}
}
fclose(fptr);
fclose(fptr1);
return reval;
}
