// 11_q2.c (�����̵� 28 Q2)
// >>> 11_q3.c (�����̵� 28 Q2)

#include <stdio.h>

int result; // ���� ����

void Test() {
	static int result = 0; // ���� ���� (�浹?)
	printf("%d, ", result++);
}
int main(void) {
	for (int i = 0; i < 5; i++) Test(); // 0, 1, 2, 3, 4, 
	return 0;
}