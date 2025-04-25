#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

typedef void(*PFunc)(const char*);

int rollDice() {
	return(rand() % 6) + 1;
}

void showResult(const char* result) {
	printf("%s\n", result);
}

void checkGuess(int guess, int diceResult, PFunc callback) {
	const char* result;

	if ((diceResult % 2 == 0 && guess == 0) || (diceResult % 2 != 0 && guess == 1)) {
		result = "正解";
	} else {
		result = "不正解";
	}
	Sleep(3000);
	callback(result);
}

int main() {
	srand((unsigned int)time(NULL));

	int diceResult = rollDice();
	int userGuess;

	printf("サイコロの目が半か丁かを予想してください。\n");
	printf("0:丁,1:半\n");
	printf("予想してください:");

	if (scanf("%d", &userGuess) != 1 || (userGuess != 1)) {
		printf("無効な入力です。0か1で予想してください。\n");
		return 1;
	}
	checkGuess(userGuess, diceResult, showResult);

	return 0;
}
