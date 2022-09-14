#include<stdio.h>



int main(){

int rev[7];

	printf("enter your array numbers :");
	
	for(int j = 0 ; j < 7 ;j++){
	
	scanf("%d" ,&rev[j]);
	}
	
	int box;
	for(int i = 0 ; i < 6 ;i++){
		for(int j = i + 1 ; j < 7 ; j++){
		
		if(rev[i] > rev[j]){
		
		box = rev[i];
		rev[i]=rev[j];
		rev[j]=box;
		
		}
		
		}
	
	}

		printf("array is good \n");
		for(int i = 6;i >= 0;i--)
			printf("%d",rev[i]);

		return 0;

}
