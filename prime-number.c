#include <stdio.h>

int isPrime(int num)
{
    for (int i = 2; i * i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}
int main()
{
    int i, j, k;
    printf("👋 Hii!\n");
    printf("I will print you Prime number please enter starting and ending number in next prompts\n");
    printf("Please enter the starting number : ");
    scanf("%d", &i);

    printf("\nPlease enter the ending number : ");
    scanf("%d", &j);

    for (k = i; k <= j; k++)
    {
        if (isPrime(k))
        {
            printf("%d ", k);
        }
    }
}
