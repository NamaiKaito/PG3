#include<stdio.h>

void PrintHelloWorld(void) {
	printf("HelloWorld\n");
}
int main(void) {

	void (*pfunc)();

	pfunc = PrintHelloWorld;
	printf("PrintHelloWorldのアドレス = %p\n", PrintHelloWorld);
	printf("pfuncの内容 = %p\n", *pfunc);
	pfunc();

		return 0;
}