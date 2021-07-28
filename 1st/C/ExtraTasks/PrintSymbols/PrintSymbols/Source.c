#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	printf("Enter count of stars: ");
	scanf_s("%d", &a);
	for(int i = 0; i < a; i++) 
	{
		printf("*");
	}
}