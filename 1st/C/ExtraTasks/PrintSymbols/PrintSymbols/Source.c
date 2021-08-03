#include <stdio.h>
#include <stdlib.h>
#include "Source.h"

int main() {
	int l = UserInput("Enter lenght: ");
	int h = UserInput("Enter height: ");
	
	for(int i = 0; i < h; i++) 
	{
		for (int j = 0; j < l; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}

int UserInput(const char *message)
{
	int a;
	printf(message);
	scanf_s("%d", &a);
	return a;
}
