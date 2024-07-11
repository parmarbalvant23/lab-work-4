#include <stdio.h>


 main()
  
{
    float mathsmarks,englishmarks,sincemarks,average;
    
    printf("Enter mathesmarks (out of 100) ");
    scanf("%f",&mathsmarks);
    printf("Enter englishmarks (out of 100) ");
    scanf("%f",&englishmarks);
    printf("Enter since marks  (out of 100) ");
    scanf("%f",&sincemarks);

    average = (mathsmarks + englishmarks + sincemarks) / 3;

    printf("average marks = %.2f",average);

}
