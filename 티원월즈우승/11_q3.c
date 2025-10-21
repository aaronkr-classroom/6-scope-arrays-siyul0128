// 11_q2.c (슬라이드 28 Q2)
// >>> 11_q3.c (슬라이드 28 Q2)

#include <stdio.h>

int result; // 전역 변수

void Test() {
	static int result = 0; // 지역 변수 (충돌?)
	printf("%d, ", result++);
}
int main(void) {
	for (int i = 0; i < 5; i++) Test(); // 0, 1, 2, 3, 4, 
	return 0;
}