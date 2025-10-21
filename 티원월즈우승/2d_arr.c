// 2d_arr.c
#include <stdio.h>

#define NUM_STDS 3
#define NUM_GRADES 4

float calcAvg(int data[]) {
	int sum = 0;
	for (int i = 0; i < NUM_GRADES; i++) {
		sum += data[i];
	}
	return sum / NUM_GRADES; // (85 + 45 + 70 + 93) / 4 =
}

int main(void) {
	int grades[NUM_STDS][NUM_GRADES] = { // [3�л�][4���� ����]
		{85, 45, 70, 93}, // �л� 1
		{74, 86, 93, 45}, // �л� 2
		{67, 37, 99, 97}  // �л� 3
	};

	// �� �л��� ���� ���
	printf("Student grades:\n");
	for (int i = 0; i < NUM_STDS; i++) { // ��� �л��� ����
		printf("Student %d: ", i + 1); // 0�ε��� �빮�� 1���� ���� ����
		for (int j = 0; j < NUM_GRADES; j++) { // �� �л��� ��� ���� ����
			printf("%d ", grades[i][j]); // grades[�л�][����] ��ġ
		}
		printf("Average: %.2f\n", calcAvg(grades[i]));
	}
	return 0;
}