#include<stdio.h>

int fib(int number){
    if(number<=1){
        return number;
    }
    return fib(number-1)+fib(number-2);
}

/* num=5
fib(5)
->fib(4)
    ->fib(3)
        ->fib(2)
            ->fib(1)
            ->fib(0)
        ->fib(1)
    ->fib(2)
        ->fib(1)
        ->fib(0)
->fib(3)
    ->fib(2)
        ->fib(1)
        ->fib(0)
    ->fib(1)

sum(10)
    ->10 + 45
        ->9 +36
            ->8 + 28
                ->7 + 21
                    ->6 + 15
                        ->5 + 10
                            ->4 + 6
                                ->3 + 3
                                    ->2 + 1
                                        ->1 + 0
                                            ->0 */

void main(){
    /* int num1=0,num2=1,sum=0;
    int i;
    for ( i = 0; i < 23 ; i++)
    {
        sum=num1+num2;
        num1=num2;
        num2=sum;
    }
    printf("%d",sum); */
    printf("%d",fib(15-1));
}

// 0 1 2 3 4 5 6 7 8 9 10
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229 832040