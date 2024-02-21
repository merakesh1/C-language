#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("could not allocate memory");
        return;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter the value at arr[%d]: %d\n", i, *(ptr + i));
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter the value at arr[%d]: ", i);
        scanf("%d", (ptr + i));
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        printf("value at arr[%d]: %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }

    printf("sum is :%d\n", sum);
    printf("avg is :%d\n", (sum / n));

    int a;
    printf("do you want to increase or decrease size of array: ");
    scanf("%d", &a);
    printf("\n");
    if (a == 1)
    {
        int n1;
        printf("Enter the number of elements: ");
        scanf("%d", &n1);
        ptr = (int *)realloc(ptr, (n1) * sizeof(int));

        for (i = n; i < n1; i++)
        {
            printf("Enter the value at arr[%d]: ", i);
            scanf("%d", (ptr + i));
            printf("\n");
        }

        int b;
        printf("do you want to print the array: ");
        scanf("%d", &b);
        printf("\n");
        if (b == 1)
        {
            for (i = 0; i < n1; i++)
            {
                printf("value at arr[%d]: %d\n", i, *(ptr + i));
            }
        }
        else
        {
            printf("program ended\n");
            free(ptr);
            return;
        }
        free(ptr);
    }
    free(ptr);
    printf("program ended\n");
}