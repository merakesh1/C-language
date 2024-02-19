#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return (int)(num1 / num2);
}

void main()
{
    // int arr[4]={};
    int num1, num2;
    int (*arr_of_functions[4])(int, int);
    
    arr_of_functions[0] = &add;
    arr_of_functions[1] = &sub;
    arr_of_functions[2] = &mul;
    arr_of_functions[3] = &div;

    int flag = 1;
    while (flag == 1)
    {
        int choice;
        printf("1. Add\n2. Sub\n3. Mul\n4. Div\nAny other number to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
        {
            printf("Enter num1 and num2: ");
            scanf("%d %d", &num1, &num2);
            printf("Result is :%d\n", arr_of_functions[choice - 1](num1, num2));
            printf("Enter 1 to continue and 0 to exit: ");
            scanf("%d", &flag);
        }
        else{
            flag = 0;
        }

        if (flag != 1 ){
            printf("Thank you\n");
        }
        
    }
}