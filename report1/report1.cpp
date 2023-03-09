#include <stdio.h>

int main()
{
    int i, j, result;

    for (i = 2; i <= 100; i++)
    {
        result = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                result = 0;
                break;
            }
        }

        if (result == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}