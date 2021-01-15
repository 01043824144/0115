#include <stdio.h>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

int main_9(void) {

	// + - * / % (산술연산자)
	// & | ^ ~ (비트연산자)

	int a = 10, b = 9; //20=1 0100 , 16=1 0000

	int result1, result2, result3
		, result4;

	result1 = a & b; //논리곱 (AND)
	printf("비트단위 And(논리곱) 연산의 결과 %d \n", result1);

	result2 = a | b; //논리합 (OR)
	printf("비트단위 Or(논리곱) 연산의 결과 %d \n", result2);

	result3 = a ^ b; //배타적 논리합 (XOR)
	printf("비트단위 XOR(배타적 논리합) 연산의 결과 %d \n", result3);

	result4 = ~b; //부정 Not 연산
	printf("비트단위 Not(부정) 연산의 결과 %d \n", result4);


	//And 연산의 경우는 양쪽다 T일때 T
	   /*
		1 & 1 = 1
		0 & 1 = 0
		1 & 1 = 0
		0 % 0 = 0
		*/
	
	//Or 연산의 경우는 하나라도 T일때 T
		   /*
			1 | 1 = 1
			0 | 1 = 1
			1 | 0 = 1
			0 | 0 = 0
			*/

	//^ XOR 연산의 경우는 값이 같으면 F 값이 다르면 T
		   /*
			1 ^ 1 = 0
			0 ^ 1 = 1
			1 ^ 0 = 1
			0 ^ 0 = 0
			*/

	//~ NOT 연산은 비트를 뒤집는다.
	   /*
		~1 > 0000 0001 > 1111 1110 > -1

		*/

	// 0 , 11 , 1 , 0
	printf("\n\n%d\n", 10 & 17);
	printf("%d\n", 10 | 9);
	printf("%d\n", 4 ^ 5);
	printf("%d\n", ~- 1);




	
	


	
	return 0;

}