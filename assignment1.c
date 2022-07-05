/*Create 10x10 square matrix with the elements between 50 and 99. Print "A random matrix is created."
"Enter your choice: "T" for trace
"D" for determinant*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  int i,j,two_dim[10][10]={0},trace,determinant;
  int operation;
  srand (time(NULL));
  
  for (i=0;i<10;i++)
  {
   for (j=0;j<10;j++)
   {
   	if (i<j)
   	two_dim[i][j]=0;
   	
   	else
   	two_dim[i][j]=50+rand()%50;
   	
   	printf ("%2d ",two_dim[i][j]);
   }
   printf ("\n");
  }
   printf ("\n");
   
  printf ("A random matrix is created.\n");
   printf ("\n");
   
   determinant=two_dim[0][0]*two_dim[1][1]*two_dim[2][2]*two_dim[3][3]*two_dim[4][4]*two_dim[5][5]*two_dim[6][6]*two_dim[7][7]*two_dim[8][8]*two_dim[9][9];
    trace=two_dim[0][0]+two_dim[1][1]+two_dim[2][2]+two_dim[3][3]+two_dim[4][4]+two_dim[5][5]+two_dim[6][6]+two_dim[7][7]+two_dim[8][8]+two_dim[9][9];
    
  printf ("Enter your choice : 'T' for trace, 'D' for determinant :  ");
    scanf ("%c",&operation);

  switch(operation){
  	
  	case 'D':
  	case 'd':
printf ("Determinant is %d\n",determinant);
	break;
	
	case 'T':
	case 't':
	printf ("Trace is : %d\n",trace);
	break;
	
	default :
	printf ("Letter is invalid for this program. Enter 'T' for trace, 'T' for determinant.");
  }  
 
  return 0;
}
