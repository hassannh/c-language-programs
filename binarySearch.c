#include<stdio.h>


int main()
{
   int c, first = 0, last = 9, middle = (first + last)/2, n, search, array[10]={4,5,7,9,13,15,26,57,89};

begin:

   printf("Enter the value to find:\n");
   scanf("%d", &search);

 
while(array[middle] != search && last > first){


	if(array[middle] < search)
		first = middle - 1;

	else if(array[middle] > search ){
		last = middle + 1;
		 	
	}

		middle = (first + last)/2;
}

	if(array[middle] == search)
	printf("your %d place is" ,middle);

	else
		printf("not a number in the list");

	goto begin;

   return 0;

   }
