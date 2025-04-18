#include<stdio.h>

template<typename T1,typename T2>
T1 Min(T1 a, T2 b) {
	if (a > b) {
		return b;
	}
	if (a < b) {
		return a;
	}
}
template<>
char Min<char, char>(char a, char b) {
	printf("数字以外は代入できません");
	return 0;
}
 
int main(void) {
	printf("%d\n", Min<int,int>(114, 514));
	printf("%f\n", Min<float,float>(11.4f, 51.4f));
	printf("%lf\n", Min<double,double>(1.14, 5.14));
	printf("%c\n", Min<char,char>('A', 'B'));
	

	return 0;
}