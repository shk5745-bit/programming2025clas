#include <stdio.h>

int main(void)
	{
		//��� �� ���� ����
		const char* name =
			"Sungwook"; // const char *
		char initial =
			'S';		//char
		int age =
			28;				//int
		float score =
			93.5f;		//float
		unsigned int count =
			3000000000; //unsigned int

		//���
		printf("=== Basic Constants ===\n");
		printf("Name\t: %s\n", name);		// %s
		printf("initial\t: %c\n", initial); // %c
		printf("Age: %d\n", age);		// %d
		printf("Score\t: %f\n", score);		// %f
		printf("Count\t: %u\n", count);		// %u

		return 0;

	}
