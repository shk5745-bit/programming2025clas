#include <stdio.h>

int main(void)
{
	int age = 28;
	unsigned int count = 300000000;
	float score = 93.5f;
	const char* title = "Basic Constants";
	const char* name = "SangHun";
	char initial = name[0];
	printf("=== %s ===\n Name \t : % s \n Initial : % c\n Age : % d\n Socre \t : % .6f\n Count \t : % u\n", title, name, initial, age, score, count);
	return 0;
}