// >>> 11_q2.c (�����̵� 28 Q2)
// 11_q3.c (�����̵� 28 Q2)

#include <stdio.h>

int result; // ���� ����

void Test() {
	int result = 5; // ���� ���� (�浹?)
	result++;
}
int main(void) {
	Test();
	printf("result: %d", result); // 0. null (���� ���� ���)
	return 0;
}