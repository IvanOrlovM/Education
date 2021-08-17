#include <stdio.h>
#include <stdlib.h>
#include "Source.h"

void main()
{
	srand(time(NULL));

	int columnsCount = UserInput("Enter count of columns: ");
	int rowsCount = UserInput("Enter count of rows: ");

	// two - dimensional array
	int** twoDimArr = CreateTwoDimArray(columnsCount, rowsCount);
	
	FillInTwoDimArray(twoDimArr, columnsCount, rowsCount);

	ShowTwoDimArray(twoDimArr, columnsCount, rowsCount);

	FreeMemoryOfTwoDimArr(rowsCount, twoDimArr);
}

void FreeMemoryOfTwoDimArr(int rowsCount, int** twoDimArr)
{
	for (int i = 0; i < rowsCount; i++)
	{
		free(twoDimArr[i]);
	}
}

int UserInput(const char* message)
{
	int size;
	printf(message);
	scanf_s("%d", &size);
	return size;
}

int** CreateTwoDimArray(int columnsCount, int rowsCount)
{
	// указатель для блока памяти для массива указателей
	int** table;

	// выделяем память для двухмерного массива
	table = calloc(rowsCount, sizeof(int*));

	for (int i = 0; i < rowsCount; i++)
	{
		table[i] = malloc(columnsCount * sizeof(int));
	}

	return table;
}

int** FillInTwoDimArray(int** arr, int columnsCount, int rowsCount)
{
	for (int i = 0; i < rowsCount; i++)
	{
		for (int j = 0; j < columnsCount; j++)
		{
			arr[i][j] = rand();
		}
	}

	return arr;
}

void ShowTwoDimArray(int** arr, int columnsCount, int rowsCount)
{
	for (int i = 0; i < rowsCount; i++)
	{
		for (int j = 0; j < columnsCount; j++)
		{
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}