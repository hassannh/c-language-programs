#include<stdio.h>
#include<stdlib.h>


int main(){

int *ptr , n , i , sum = 0;


printf("enter size of element ");
scanf("%d",&n);


ptr = (int*)malloc(n * sizeof(int));
printf("%p",ptr);
if(ptr == NULL){

    printf("memory empty");
    exit(0);
    }
    else{

        printf("enter an element :");
        for ( i = 0; i < n; i++)
        {
           scanf("%d",&ptr[i]);
        
            sum += ptr[i];
        }
        }
        printf("array = %d " ,sum );
        for ( i = 0; i < n; i++)
        {
           printf("%d ",ptr[i]);
                }
        // deallocating the memory

        free(ptr);

        return 0;

}
