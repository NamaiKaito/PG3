#include<stdio.h>

int Recursive(int hour) {
	if (hour == 1) {
		return 100;
	}
	int previousWage = Recursive(hour - 1);
	return previousWage*2-50;
}

int main() {
	int hours = 1;
	int standardWage = 1072;
	int totalStandardWage = standardWage * hours;
	int totalRecursiveWage;

	while (1) {
		totalStandardWage = standardWage * hours;
		totalRecursiveWage = 0;

		for (int i = 1; i <= hours; i++) {
			totalRecursiveWage += Recursive(i);
		}

		if (totalRecursiveWage > totalStandardWage) {
			break;
		}
		hours++;
	}

	printf("再帰的な賃金体系の方が儲かるのは、%d時間働いた時です。\n", hours);
	printf("再帰的な賃金体系での合計賃金：%d円\n", totalRecursiveWage);
	printf("一般的な賃金体系での合計賃金：%d円\n", totalStandardWage);
	
	return(0);
}