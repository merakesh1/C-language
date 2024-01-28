#include<stdio.h>
void main(){
    int a=10, b=20;
    _Bool isEqual= a==b;
    _Bool isNotEqual= a!=b;
    _Bool isGreater= a>b;
    _Bool isLess= a<b;
    _Bool isGreaterEqual= a>=b;
    _Bool isLessEqual= a<=b;

    printf("isEqual is :%d\n",isEqual);
    printf("isNotEqual is :%d\n",isNotEqual);
    printf("isGreater is :%d\n",isGreater);
    printf("isLess is :%d\n",isLess);
    printf("isGreaterEqual is :%d\n",isGreaterEqual);
    printf("isLessEqual is :%d\n",isLessEqual);

    int count=1;
    int d=count--;
    printf("count is :%d\n",count);
    printf("count is :%d\n",d);
}
