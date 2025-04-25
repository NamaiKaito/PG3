#include<stdio.h>

int Recursive(int hour) {
	if (hour == 1) {
		return 100;
	}
	int previousWage = Recursive(hour - 1);
	return previousWage*2-50;
}

int main() {
	int hours = 10;
	int standardWage = 1072;
	int totalStandardWage = standardWage * hours;
	int totalRecursiveWage = 0;

	for (int i = 1; i <= hours; i++) {
		totalRecursiveWage += Recursive(i);
	}

	printf("一般的な賃金体系での合計賃金：%d円\n", totalStandardWage);
	printf("再帰的な賃金体系での合計賃金：%d円\n", totalRecursiveWage);

	return(0);
}