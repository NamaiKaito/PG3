#include<stdio.h>
#include<Windows.h>
int main() {
	SetConsoleOutputCP(65001);
	char str[] = "僕!アンパンマン!";
	printf("%s",str);

	return 0;
}