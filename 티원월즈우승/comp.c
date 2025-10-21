// comp.c
// 1�� ���� & 2�� ����
#include <stdio.h>

// 2���� ǥ�� ���
void printBinary(unsigned char num) {
	for (int i = 7; i >= 0; i--) {
		printf("%d", (num >> i) & 1);
	}
}

// 1�� ����
unsigned char onesComp(unsigned char num) {
	return ~num; // ��� ��Ʈ�� �����ϱ� 0110 => 1001
}

// 2�� ����
unsigned char twosComp(unsigned char num) {
	return ~num + 1; // ��� ��Ʈ�� �����ϱ� 0110 => 1000
}

int main(void) {
	unsigned char num;

	printf("Enter a number (0-255): ");
	scanf_s("%hhu", &num); // unsigned char input

	printf("\n Original: %3d = ", num);
	printBinary(num);

	unsigned char ones = onesComp(num);
	printf("\n 1�� ����: %3d = ", num);
	printBinary(num);

	unsigned char twos = twosComp(num);
	printf("\n 2�� ����: %3d = ", num);
	printBinary(num);

	return 0;
}