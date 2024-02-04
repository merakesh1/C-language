#include <stdio.h>

/* void func(int num,int sum){
    if(num>=10){
        printf("sum is :%d\n",sum);
        return;
    }
    sum+=num;
    func(num+1,sum);
} */

// int fact(int num){
    /* if (num>=6)
    {
        return product;
    }
    
    product*=num;
    return fact(num+1,product); */
    /* if(num<=1){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
} */

int power(int base,int exp){
    if(exp==0){
        return 1;
    }
    else{
        return base*power(base,exp-1);
    }

}

void main(){
    // func(1,0);
    /* int product=7;
    int i;
    for(i = 6; i >0; i--)
    {
        product*=i;
    }
    printf("product is :%d\n",product); */
    /* int result=fact(1,1);
    printf("result is :%d\n",result); */

    int base=2;
    int power=3;
    int result=1;
    int i;
    for(i=0;i<power;i++){
        result*=base;
    }
}

