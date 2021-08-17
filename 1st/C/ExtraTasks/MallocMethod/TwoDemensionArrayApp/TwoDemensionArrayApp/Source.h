#pragma once

void main();
void FreeMemoryOfTwoDimArr(int rowsCount, int** twoDimArr);
int UserInput(const char* message);
int** CreateTwoDimArray(int columnsCount, int rowsCount);
int** FillInTwoDimArray(int** arr, int columnsCount, int rowsCount);
void ShowTwoDimArray(int** arr, int columnsCount, int rowsCount);