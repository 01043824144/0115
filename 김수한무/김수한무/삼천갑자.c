#include <stdio.h>

int main_04(void)
{
    //관계연산자 연습
    //A<B
    //A>B
    //A<=B
    //A==B Equal
    //A!=B Not Equal



    int num1 = 2, num2 = 4;
    int r1, r2, r3, r4;

    r1 = num1 > num2;
    r2 = num1 < num2;
    r3 = num1 >= num2;
    r4 = num1 <= num2;

    printf("r1=%d\n", r1);
    printf("r2=%d\n", r2);
    printf("r3=%d\n", r3);
    printf("r4=%d\n", r4);

    printf("r1=%d\n", num1+2>num2);
    printf("r1=%d\n", num1 + 2 >= num2);
    printf("r_equal=%d\n", num1 == num2);
    printf("r_equal=%d\n", num1+2 == num2);
    printf("r_equal=%d\n", num1 != num2);
    printf("r_equal=%d\n", num1 + 2 != num2);
    printf("r_equal=%d\n", !(num1 + 2 == num2));


    //(num1 + 2) > num2 | (num1 == num2);
   // 4>4 | 2==4 
    //    0(거짓) | 0(거짓) =0

    //(num1 + 2) > num2 | (num1+2 == num2);
    //4>4 | 4=4
   // 0|1 =1


    return 0;
}
