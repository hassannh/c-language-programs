#include<stdio.h>





int main(){



	int number ,guessNumber;



	printf("type the number you want play with");

	scanf("%d",&number);




	printf("type a number betwen 1 to 50 :");


	again:



	scanf("%d",&guessNumber);

			while(1){
			
			
			if (guessNumber > number){
			
			printf("please type a smuller number");
			
	
				goto again;

			}
			
			else if (guessNumber < number){
			
			printf("please type a larger number");
			


			goto again;
			
			
			}


			else {
			
			
				printf("congratilations you guessed it right !!!!");

			}

			break;

			}


			
			return (0);
			
			}
			
