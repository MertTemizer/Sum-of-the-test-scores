#include <stdio.h>

int main()
{
    int score1, score2, score3, score4, score5, score6;
    int sum = 0;
    
    printf("Enter the first score: ");
    scanf("%d", &score1);
    sum = sum + score1;
    
    printf("Enter the second score: ");
    scanf("%d", &score2);
    sum = sum + score2;
    
    printf("Enter the third score: ");
    scanf("%d", &score3);
    sum = sum + score3;
    
    printf("Enter the fourth score: ");
    scanf("%d", &score4);
    sum = sum + score4;
    
    printf("Enter the fifth score: ");
    scanf("%d", &score5);
    sum = sum + score5;
    
    printf("Enter the sixth score: ");
    scanf("%d", &score6);
    sum = sum + score6;
    
    printf("Sum of test scores is: %d", sum);
    
    return 0;
}
