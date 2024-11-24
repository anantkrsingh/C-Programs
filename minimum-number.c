#include <stdio.h>

int main()
{
    int myArray[] = {0, 6, 9, 7, 8, 9, 11, 3, 1};
    int min = myArray[0];

    for (int i = 1; i < 9; i++)
    {
        if (myArray[i] < min)
            min = myArray[i];
    }

    printf("Minimum number is %d\n ", min);

    return 0;
}