#include <stdio.h>


typedef struct date{

int day;
int mounth;
int year;

}date;

typedef struct students{

char nom[14];
char prenom[14];
date da;


}students;

int main () {
students s[100];
int n;


printf("enter number of students you want to add: ");
scanf("%d", &n);

 for (int i=0; i<n; i++){

    printf("\n enter information of student n %d: \n", i+1);
    printf("enter first name: ");
    scanf("%s",&s[i].nom);


    printf("enter last number: ");
    scanf("%s",&s[i].prenom);


    printf("please enter birthdate: \n");


	do{
    printf("enter the day:");
    scanf("%d",&s[i].da.day);
	}while(s[i].da.day < 1 || s[i].da.day > 31);
	do{
	printf("enter the mounth: ");
    scanf("%d",&s[i].da.mounth);
	}while(s[i].da.mounth < 1 || s[i].da.mounth > 12);
	
	do{
	printf("enter the year: ");
    scanf("%d",&s[i].da.year);
	
 	}while(s[i].da.year < 1 || s[i].da.year > 2022);}
//tri a bulle
 for (int i=0; i<n-1; i++){
    for(int j=1; j<n; j++){
        if(s[j].da.year <s[i].da.year){
            int box = s[j].da.year;
            s[j].da.year = s[i].da.year;
            s[i].da.year = box;
        }

    }


 }



//Affichage
    printf("information of student  : \n\n");
    for(int i=0; i<n; i++) {

        printf("%s \t %s \t %d/%d/%d \n",s[i].nom,s[i].prenom,s[i].da.day,s[i].da.mounth,s[i].da.year);
    }




return 0;

}