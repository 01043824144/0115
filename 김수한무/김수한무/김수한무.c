#include <stdio.h>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

int main_9(void) {

	// + - * / % (���������)
	// & | ^ ~ (��Ʈ������)

	int a = 10, b = 9; //20=1 0100 , 16=1 0000

	int result1, result2, result3
		, result4;

	result1 = a & b; //���� (AND)
	printf("��Ʈ���� And(����) ������ ��� %d \n", result1);

	result2 = a | b; //���� (OR)
	printf("��Ʈ���� Or(����) ������ ��� %d \n", result2);

	result3 = a ^ b; //��Ÿ�� ���� (XOR)
	printf("��Ʈ���� XOR(��Ÿ�� ����) ������ ��� %d \n", result3);

	result4 = ~b; //���� Not ����
	printf("��Ʈ���� Not(����) ������ ��� %d \n", result4);


	//And ������ ���� ���ʴ� T�϶� T
	   /*
		1 & 1 = 1
		0 & 1 = 0
		1 & 1 = 0
		0 % 0 = 0
		*/
	
	//Or ������ ���� �ϳ��� T�϶� T
		   /*
			1 | 1 = 1
			0 | 1 = 1
			1 | 0 = 1
			0 | 0 = 0
			*/

	//^ XOR ������ ���� ���� ������ F ���� �ٸ��� T
		   /*
			1 ^ 1 = 0
			0 ^ 1 = 1
			1 ^ 0 = 1
			0 ^ 0 = 0
			*/

	//~ NOT ������ ��Ʈ�� �����´�.
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