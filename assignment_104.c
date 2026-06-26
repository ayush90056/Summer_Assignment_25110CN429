#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("===== Quiz Application =====\n");

    printf("\n1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\n2. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n3. 5 + 10 = ?\n");
    printf("1. 10\n2. 15\n3. 20\n4. 25\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}