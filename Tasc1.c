#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9
void main() {
	setlocale(LC_ALL, ".UTF8");
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row) {
		for (col = 1; col <= row; col++);
		printf("%5d", col * row);
		printf("\n");
	}
	system("pause");
}