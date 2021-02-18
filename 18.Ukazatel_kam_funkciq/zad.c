#include <stdio.h>
#include <stdlib.h>

int main()
{
	int C[6][6];
	
	int i,j;
	
	printf("Da se sustavi programa za obrabotka na masiva C[6,6], kudeto dannite sa chisla v intervala [-99 - 99]... Imeto na avtora: Dimitar!\n");
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
            do{
                printf("Enter value for array[%d][%d]: ", i, j);
                scanf("%d", &C[i][j]);
            }
            while(C[i][j] < -99 || C[i][j] > 99);
        }
		 	
	} 
	 
	printf("\nIzvejdane na masiva:");
		
	for(i=0;i<6;i++)
	 {
		for(j=0;j<6;j++)
		 {
		 	printf("\nC[%d,%d]=%d",i,j,C[i][j]);
		 }
	 } 	

	for(i=0;i<6;i++)
	 {
		for(j=0;j<6;j++)
		 {
		 	if(i==j)
		 	{
		 	 C[i][j] = 0;
            }
            else if(i<j)
            {
	 	     if(C[i][j]<0)
	 	      {
                 C[i][j]*=-1;
              }
            }
 	       else
           {
              if(C[i][j]>0)
               {
                 C[i][j]*=-1;
               }
           }
		 }
	 }
	 
	 
	printf("\n\nMasiva sled podrejdaneto:\n");
	for(i=0;i<6;i++)
	 {
		for(j=0;j<6;j++)
		 {
		 	printf("\nC[%d,%d]=%d",i,j,C[i][j]);
		 }
	 } 	

	printf("\n");
	system("pause");
	return 0;
}