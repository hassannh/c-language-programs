#include<stdio.h>
#include<stdlib.h>


int main(){

int  n , i;

char chara[100];
char ss[100];
char *ptr ;
printf("enter size of element ");
scanf("%d",&n);
ptr = (char*)malloc(9);
printf("%p",ptr);
if(ptr == NULL){

    printf("memory empty");
    exit(0);
    }else{

        printf("enter an element :");
        //gets(ptr);
        gets(ptr);
        fgets(ptr,100,stdin);
	    //sscanf(chara, "%s" , ptr);

	   printf("%s",ptr);
        
            
    }
		
        // deallocating the memory

        free(ptr);

        return 0;

}

