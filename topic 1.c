#include <stdio.h>

 main() 
 
 {
 	int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
    {
	      printf("this number is negative");
    }
    else if(number == 0)
    {
    	printf("this number is nutral");
	}
	else
	{
		printf("this number is positive");
	}
}
