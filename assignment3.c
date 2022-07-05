/* Kullanicidan n dizi eleman sayisi isteyin. Random n boyutlu Array (integer) tanimlayin. Array fonksiyona yolla. Mean ve max yazdir. 
fonksiyon : dizi elemanlarinin hesaplamasini bulsun. max'i bulsun. buldugu iki degeri maine yollasin. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func(int *Ptr,int n,float *mean_Ptr,int *max_Ptr);

int main (){
   int i,size,max,*a;
   float mean;
   srand(time(NULL));
   printf ("Enter sequences size : ");
   scanf ("%d",&size);
   a=(int*)calloc(size,sizeof(int));
   
   if (a==NULL)
   printf ("Error.");
   
   else{
   	for (i=0;i<size;i++)
   	{
   	a[i]=1+rand()%100;
   	printf ("%d\t",a[i]);
	}
	printf ("\n");
    func(a,size,&mean,&max);
    printf ("Mean = %.1f\nMax=%d",mean,max);
	free(a);
   }
   return 0;
}

void func (int *a,int size,float *mean_Ptr,int *max_Ptr)
{
    int i,sum=0;

	for (i=0;i<size;i++)
	sum+=a[i];
	
	*mean_Ptr=(float)sum/size;
	*max_Ptr=a[0];
	for (i=0;i<size;i++)
	{
	
	if (*max_Ptr<a[size-1-i])
	*max_Ptr=a[size-1-i];
	}
	return;
}
