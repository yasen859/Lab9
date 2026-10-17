#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9
void main() {
	setlocale(LC_ALL, ".UTF8");
	int row, col;
	printf("\n");
	for (row = 6; row >= 1; --row) {
		for (col = 1; col <= row; col++);
		printf("%3d", 5);
		printf("%10d", 5);
		printf("\n");
	}
	system("pause");
}