#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double  Ad(double x, double y)
{
    double r;

    r = x+y;
    return r;
}


int    main()
{
    double i;
    double j;
    double res;
    char  choice;

	start:


printf("........................................................................................................................ \n"
	"............................................WELCOME TO  NOUHIs CALCULATOR ..............................................\n"
	"........................................................................................................................ \n\n");
    printf("please enter first number:");
    scanf("%lf", &i);

    do
    {
        printf("please choice the process you want:\n");
        printf("the choice 1:Ad:'+'\nthe choice 2:Mu:'x'\nthe choice 3:So:'-'\nthe choice 4:Di:'/'\nthe choice 5:Rest:\n the choic 6:'cos'");
        scanf("%c", &choice);
    }while(choice <=  0 &&  choice > 5);

    printf("please enter last number:");
        scanf("%lf", &j);


    switch(choice)
    {
        case '+':
            res = Ad(i,j);

            break;
        case '*':
            res = i*j;

             break;
        case 3:

            res = i-j;

            break;
        case 4:
            while(choice == 4 && j == 0)
            {
                printf("please enter another number:");
                scanf("%lf", &j);
            }

            res = i/j;

            break;
        case 5:
	  while (choice == 5 && j == 0) {
	  	printf("Please enter a non zero number: ");
		scanf("%lf", &j);
	  }

	    while(choice == 5 && j > i) {
            goto end;
	    }
	    res = (int)  i % (int) j;
		end:
	    res = 0;

	case 6:
	    printf( "the cos is : %lf\n", cos( i ) );
   	 printf( "the sin is : %lf\n", sin( i ) );
    	printf( "the tange is : %lf\n", tan( i ) );	    
            break;
    default:
        break;
    }

    printf("%.2f\n", res);


    goto start;
}
